/*
* C++ supports a notion of seperate compilation where user code sees
*only the declaration of types and function used 
* The definition of those types and function are in seperate source files
* and compiled seperately . This can be used to organized a program into a set of 
*semi--independent code fragment.... A library is often a seperately compiled code fragments
* e.g (functions)
*
*
*
*/
// Typically , we place the declarations that specify the interface to a module in which 
// with a name indicating its intended use

// Vector.h
class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double* elem;     // elem points to an array of size double
        int sz;  
}
// This declaration would be placed in a file Vector.h and users 
// will include that file, called a header file, to access that 
// interface, For example

//user.cpp
#include "Vector"