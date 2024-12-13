#include <iostream>
using namespace std;
#include "Car.h"

void main()
{
    Car car1(100, 90);
    cout << "Car1: " << car1.GetSpeed() //100
         << "degrees, " << car1.GetDirection() //90
         << "miles per hour " << endl;

    Car car2(150, 0);
    cout << "Car2 : " << car2.GetSpeed() // 150
         << " degrees, " << car2.GetDirection()
         << " miles per hour" << endl;

    Car car3;
    car3.IncreaseSpeed(200);
    car3.TurnRight(270);
    cout << "Car3: " << car3.GetSpeed()   //200
         << " degrees, " << car3.GetDirection() //270
         << " miles per hour" << endl;

    // Causes  a compiler error as m_iSpeed is a private member
    // cout << "Speed : " << car3.m_iSpeed << endl;

}