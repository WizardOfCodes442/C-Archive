/*
*           Error Handling
*
* Eror Handling is a large and comples=x topic with concerns and ramifications that go
* far beyond language facilities into programming techniques and tools. However , C++ 
*provides a few features to help. The major tool is type system itself. 
*Instead of painstakingly building our applications from built-in types 
*(e.g char, int, and double) and statements (e.g., if, while, and for). we build
*more types that are appropriate for our applications (e.g string , map, regex) and 
* and algorithms (e.g sort(), find_if(), draw_all()). such higher level constructs simplify our programming
*limit our opportumities for mistakes and increase the compiler's chances of catching such errors
* The majority of C++ constructs are dedicated to the design and implementation of elegant and 
* efficient abstractions (e.g user-defined and algorithms using them), one effect of this 
* modularity and abstraction (in particular the use of libraries) is that the point where a run-time error can be detected 
* is seperated from the point where it can be handled , As programs grow, ans especially when libraries 
* are used extensively, standards for handling error become important
*
*
*/

/*
*        Exceptions
*Consider again the Vector example . What ought to be done when we try to access an element  
* that is out of range for the vector
*
* The writer of Vector doesn't know what the user would like to have done in this case
*(the writer of vector typically doesn't even know in which program the vector will be running)
*The user of Vector cannot consistently detect the problem (if the user could, the out of range access wouldn't happen in the first)
*
* The solution if for vector implementer ti detect the attempted out-of-range access and then 
*tell the user about it. the user can take appropriate action. . for example
*
*/
//Vector::vector[]() can detect an attempted out-of-range access and throw an out_of_range exception

double& Vector::operator[](int i) {
    if (i <0 || size() <= i) throw out_of_range{"Vector::operator[]"};
    return elem[i]
}
// The throw transfers control to a handler for exceptions of type out_of_range in 
// some function that directly or indirectly called Vector::operator[](). 
// To do that the implementation will unwind the function call stack as needed
// to get back to the context of that caller for example

void f(Vector& v)
{
    //...
    try { // exceptions here are handled by the handler defined below

        v[v.size()] = 7; // try to access beyond the end of v

    }
    catch (out_of_range) { // oops out_of_range error
        // ... handle range error...
    }
    //...
}

//  we put code for which we are interested in handling  exceptions in a try-block. 
// That attempted assignment to v[v.size()] will fail. Therefore  the catch clause providing a handler for 
// out_of_range will be entered. the out_of_range type is defined in the standard library and is in fact used by 
// some standard library container access functions

// use of the exception-handling mechanism can make error handling simpler, more systematic , and more 
// readable

//          Invariants
// The use of exception to signal out_of _range access is an example of a function 
// checking its arguments and refusing to act because a basic assumption , a precondition
// didn't hold. Had we formally specified Vector's subscript operator , we would have said something 
// like the 'index must be in the size [0:size()) range ' and that was in fact what we tested in our 
// operator[](). Whenever we define a function , we should consider what its preconditions are 
// and if feasible test them 
// However, operator[]() operates on objects of type vector and nothing it does make 
// any sense unless the members of Vectors have "reasonable " vales. In particular
// we did say "elem points to an array of sz doubles" but we only said that in a comment
// Such a statement of what is assumed to be true for a class is called a class invariant, or simply an invariant. 
// It is the job of a constructor to establish for its class (so the member functions can rely on it) 
// for the member function to make sure that the invariant hold when they exit . unfortunately our 
// Vector constructor only partially did its job. It properly initialized the vector members , but it failed to check
// the arguments passed to it
// Consider
Vector v(-27);
// This is likely to cause a chaos
//here is a more appropriate definition

Vector::Vector(int s)
{
    if (s < 0) throw length_error{};
    eleme= = new double[s];
    sz = s;
}

// we use the std library exception length_error to report a non- positive number of elements
// because soem standard library operations use that exception to report problems of this kind
// if the operator new can't find memory to allocate it throws a std::bad_alloc
//we can write

void test()
{
    try {
        Vector v(-27);
    }
    catch (std::length_error) {
        // handle negative size

    }
    catch (std::bad_alloc) {
        // handle memory exhaustion
    }
}

// you can define your own classes to be used as exceptions and have them carry arbitrary 
// informatio from a point where an error is detected to a point where it can be handled 
// often a function has no way of completing its assigned task after an exception is thrwon
// Then "handling " an exception simply means doing some minimal local cleanup and 
// retrowing the exception 
// the notion of invariants is central to the design of classes , and preconditions serve a 
// similar role in the design of functions
// Invariants helps us to understand precisely what we want
// forces us to be specific; that gives us a better chance of getting our correct code (after debugging and testing)
// The notion of invariants underlies C++'s notions of resource management supported by constructors and destructors


// Static assertions 
// Exceptions report are found at runtime . if an error can be found at compile time, 
// it is usually preferable to do so . That's what much of the type system and the facilities for 
// specifying the interface to user-defined types are for . However we can also perform simple checks on 
// other properties that are known at compile time and report failure as compiler error messages. 
// For examples

static_assert(4<=sizeof(int), "integers are too small"); //check integer size

// This will write integers are too small if 4 <= sizeof(int) does not hold,
// that is , if an int on this system does not have at least 4 bytes .. 
// we call such such statements of expectations assertions

// the static_assert mechanism can be used for anything that can be expressed in terms 
// of constants expressions

constexpr double C = 299792.458; // km/s

void f(double speed)
{
    const double local_max = 160.0/ (60*60) // 160 km/h == 160/(60*60)km/s
    
    static_assert(speed< C, "can't go that fast"); // erro: speed must be a constant
    static_assert(local_max<C, "can't go that fast"); // ok
    //..
}

// iN general, static_assert(A,S) prints S as a compiler error message if A is not true
// the most important uses of static _assert come when we make assertions about types used
// as parameters in generic programming 