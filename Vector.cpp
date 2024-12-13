// to help the compiler ensure consistency , the .cpp file providing 
// the implementation of Vector will also include the .h file 
// providing its interface

#include "Vector.h"   // get the interface

Vector::Vector(int s)
    :elem{new double[s]}, sz{s}
{

}

double& Vector::operator[](int i)
{
    return elem[i];
}
int Vector::size()
{
    return sz;
}