// users will include the Vector.h header file to access that interface
#include "Vector.h" //get Vector's interface
#include <cmath>   //get the standard library math function interface including sqrt()
using namespace std; // make the std members visible

double sqrt_sum(Vector& v)
{
    double sum = 0;
    for (int i = 0; i!=v.size(); ++i)
        sum += sqrt(v[i]); // sum of square roots
    return sum;
}