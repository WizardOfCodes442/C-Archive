#include <iostream>
#include "Car.h"
using namespace std;

void main()
{
    Car car1(100, 90);
    cout << "Car1: " << car1.GetSpeed()    //100
         << " miles per hour "
         << "degrees,  " << car1.GetDirection() // 90
         << endl;
}