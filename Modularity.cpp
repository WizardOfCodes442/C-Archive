/**
* A C++ program consists of many seperately developed parts
*such as functions, user defined types, class heirarchies, 
*and templates...The key to managing these, is to clearly define 
* the interacrtions among those parts... The first and most important step is
* to distinguish between the interface to a part and its implementation...
*at the language level, C++ represents interfaces by declarations.
*A declaration specifies all that's needed to use a function or type
*
*/
double sqrt(double); //the square root function takes a double and return a double

class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();

    private:
        double* elem; // elem points to an array of sz doubles
}
/*
* The key point here is that the function bodies, the function definitions, are "elsewhere"
* For this example, we might like for the representation of Vector to elsewhere, also, but 
* we will deal with that later (abstract types)
*
*
*
*/

// The definition of square root wil look like this
double sqrt(double d) {
    // algorithm as found in math textbook..
}

// For Vector we need to define all three member functions

Vector::Vector(int s) //definition of the constructor
    :elem{new double[s]}, sz{s}   //initialize members
{

}

double& Vector::operator[](int i) //definition of subscripting
{
    return elem[i];
}

int Vector::size()   //definition of size()
{
    return sz;
}
/*
* we must define Vector's functions , but not sqrt() because it is part 
of the standard library
*
* 
*
*
*/