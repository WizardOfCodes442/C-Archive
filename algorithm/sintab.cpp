//sintab.cpp
//creates a sine function table
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
#define PI  3.1415926536
#define START 0.0 //Lower limit 
#define END (2.0 * PI) // Upper Limit
#define STEP (PI / 8.0) //step width
#define HEADER (cout <<\
    "  ***** Sine Function Table  *****\n\n")

int main()
{
    HEADER;
    cout << setw(16) << "x" << setw(20) << "sin(x)\n"
         << "  --------------------------------------"
         << fixed  << endl;
    
    double x;
    for (x= START; x < END + STEP/2; x += STEP )
        cout << setw(20) << x << setw(16) << sin(x) << endl;
    cout << endl << endl;
    return 0;


}