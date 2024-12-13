/*

*/
// An array of elements of type char can be declared like this 
char v[6]; // array of 6 characters 

// Similarly a pointer can be declared like this 
char* p; // pointer to character

/*
In declarations [] means "array of ", and * means pointer
The size of an array must be a constant expression
A pointer variable can hold the address of an object of the appropriate type
*/

char* p = &v[3];  // p poinys to v's 4th object
char x = *p;      // *p is the object that p points to 

/*
In an expression , prefix unary * means "content of"
and prefix unary & means "address of "
*/

void print()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // demonstrates for -- loop for transversing array
    for (auto x:v) //for each x in v
        cout << x << "\n"; 
}

/*
if we didn't want to copy the values from v into the variable x, 
but rather just have x refer to an element , we could write
*/

void increment()
{
    int v[] = {0, 1,2,3,4,5,6,7,8,9};

    for(auto& x:v)
        ++x;
}

/*
In declaration , the unary suffix & means "reference to"
A reference is similar to a pointer , except you don't 
need to use a prefix * to access the value referred to by the reference
ALso a referrence cannot be made to refer to a different object after
initialization
When used in declarations operators such as & * and [] are called declarations operators
*/

// T a[n]; //T[n]: array of n Ts
// T* p; // T*; pointer to T 
// T& r; // T& refernce to T 
// T f(A); // T(A): function taking an argument of type A returning a result of type T

/*
 We try to ensure that a pointer always point to an object , so that dereferencing it is valid
 When we don't have an object to point to or if we need to represent the notion of 
 "no object is available" (e.g for an end of a list ), we give the pointer the value nullptr
 ("the null pointer")... There is only one nullptr shared by all pointers types
*/
double* pd = nullptr;
Link<Record>* lst = nullptr; //pointer to a link to a Record
int x = nullptr;   //error: nullptr is a pointer not an integer

/*
It is often wise to check that a pointer argument that is supposed to point 
to something , actually points to it.
*/

int count_x(char* p, char x)
    // count the number of occurences of x in p[]
    // p is assumed to point to a zero - terminated array of char (or nothing)
{
    if (p == nullptr) return 0;
    int count = 0;
    for (; p!=0; ++p)
        if (*p == x)
            ++count;
        return count;
}

/*
Note how we can move a pointer to point to the next element of an 
array using ++ and that we can leave out the initializer in a for loop
if we don't need it 

The definition of count_x() assumes that the char* is a C style string 
that is, the pointer points to a zero terminated array of char.
*/

/**
 * User Defined Types
 * 
 * 
 * 
*/

// The first step in building a new type is often to organize the 
//elements its into a data structure , a struct

struct Vector {
    int sz; // number of elements 
    double* elem; // pointers to elements 
};

// The first version of Vector consists of an int and a double*
// A variable of type Vector can be defined like this
Vector v;

/**
 * However , by itself that is not of much use, because v's elem pointer 
 * doesn't point to anything ... To be useful, we must give v some elements
 * to point to. For example , we can construct a vector like this
*/

void vector_init(Vector& v, int s)
{
    v.elem = new double[s]; // allocate an array of s doubles 
    v.sz = s;
}

/**
 * That is, v's elem member gets a pointer produced by the new operator 
 * and v's size member gets the number of elements . The & in Vector& indicates 
 * that we pass v by non-const reference, that way, vector_init() can modify 
 * the vector passed to it 
 * The new operator allocates memory from an area called the free store 
 * (also known as dynamic memory and heap)
*/

// A simple use of Vector looks like this
double read_and_sum(int s)
    // read s integers from cin and return their sum, s is assumed to be positive
{
     Vector v;
     vector_init(v, s); // allocate s elements for v
     for (int i = 0; i!=s; ++i)
        cin >> v.elem[i]; // read into elements

    double sum = 0;
    for (int i = 0; i!=s; ++i)
        sum += v.elem[i]; // take the sum of the elements
    return sum;
}

void f(Vector v, Vector& rv, Vector* pv)
{
    int i1 = v.sz;  //access through name
    int i2 = rv.sz; // access through reference
    int i3 = pv->sz; // access through pointer 
}

/*
Having the data specified seperately from the operations on it, has advantages 
such as the ability to use the data in arbitrary ways. However , a tighter connection 
between the representation and the operations is needed for a user-defined type to 
have all the properties expected of a "real type". In particular , we often want 
to keep the representation inaccessible to users , so as to ease use, guarantee 
consistent use of data and allow us to later improve the representation.
To do that we have distinguish between the interface to a type (to be used by all)
and its implementation (which has access to otherwise inaccessible data) the language
mechanism for that is called a class. A class is defined to have a set of members , 
which can be data, function, or type members. The interface is defined by the public 
members of a class , and private members are accessible only through the interface
*/

// for example 
class Vector {
public:
    Vector(int s):elem{new double[s]}, sz{s} {} // construct a vector 
    double& operator[](int i) {return elem[i]; } // element access: subscripting
    int size() { return sz; }

private:
    double* elem; // pointer to elements
    int sz;       // the number of elements
};

// given that , we can define a new variable of our vector type
Vector v(6); // a vector with 6 elements

/**
 * Basically, the Vector object is a handle containing a pointer to the elements (elem)
 * plus the number of elements (sz) The number of elements can vary from Vector object
 * to Vector Object , and a Vector object can a different number of elements at different 
 * times. However , the vector object itself is always the same size.
 * 
 * Here, the representation of a vector (the members elem and sz) s accessible only 
 * through the interface provided by the public members: Vector(), operator[](), 
 * and size(), The read_and_sum() example from structure simplifies to  
 * 
*/
double read_and_sum(int s)
{
    Vector v(s);  // make a vector of s elements
    for (int i =0; i!=v.size(); ++i)
        cin >> v[i]; // read into elements

    double sum = 0;
    for(int i = 0; i !=v.size(); ++i)
        sum += v[i]  //take the sum of the elements
}

/**
 *  Vector(int) defines how objects of a type vector are constructed , In particular
 * it states that it needs an integer to do that , that integer is used as the 
 * number of elements . The constructor initializes the Vector members using 
 * a member initializer list:
 *      :elem{new double[s]}, sz{s}
 * i.e, we first initializes elem with a pointer to s elements of type double
 * obtained from the free store, Then we initialize sz to s .
 * Access to elements is provided by a subscript function, called operator[]
 * it returns a reference to the appropriate element(a double&)
 * The size() function is supplied to give users the number of elements
*/

/**
*       Enumeration
*In addition to classes C++ supports a simple form of user-defined type for 
*for which we can enumerate the values
*/
enum class Color {red, blue, green};
enum class Traffic_light {green, yellow, red};

Color col = Color::red;
Traffic_light light = Traffic_light::red;

/**
* Note that enumerators (e.g red) are in the scope of their enum class, so that they can 
*be used repeatedly in different enum classes without confusion. For example, Color::red is
*Color's red and different from Traffic_light's red
*
*Enumerations are used to represent small integer values
*the class after enum, specifies that enumeration is strongly typed and that 
*its enumerators are scoped. 
*Enum classes help prevent accidental misuse of constants

*/
Color x = red;  // error which red?
Color y = Traffic_light::red; // error : that red is not a color
Color z = Color::red; //okay

//similarly we cannot implicitly mix Color and integer values
int i = Color::red; // error: Color::red is not int
Color c = 2; // error 2 is not a color

/*
* if you don't want to explicitly qualify enumerator values to be ints (without the need for 
* explicit conversion), you can remove the class from enum  class to get a plain enum 
*
* By default , an enum class has only assignment, initialization and comparison(e.g == and <) 
*defined, However, an enumeration is a user-defined type so we can define operators for it
*
*
*/
Traffic_light& operator++(Traffic_light& t)
    // prefix increment ++
{
    switch(t) {
        case Traffic_light::green:      return t=Traffic_light::yellow;
        case Traffic_light::yellow:     return t=Traffic_light::red;
        case Traffic_light::red:        return t=Traffic_light::green;
    }
}
Traffic_light next = ++light; // next becomes Traffic_light::green