#include <iostream>
using namespace std;

void Swap(int iNumber1, int iNumber2)
{
    int iTemp = iNumber1; //(a)
    iNumber1 = iNumber2; //(b)
    iNumber2 = iTemp;  //(c)
}

void main()
{
    int iNum1 = 1, iNum2 = 2;
    cout <<"Before : " << iNum1 << ", " << iNum2 << endl;
    Swap(iNum1, iNum1);
    cout <<"After : " << iNum1  << ", " << iNum2 << endl;
}