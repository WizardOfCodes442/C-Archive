#include <iostream>
using namespace std;

void Swap(int& iNum1, int& iNum2)
{
    int iTemp = iNum1; //(a)
    iNum1 = iNum2;  //(b)
    iNum2 = iTemp; //(c)

}

void main()
{
    int iFirstNum = 1, iSecondNum = 2;
    cout << "Before : " << iFirstNum << ", "
         << iSecondNum << endl;
    
    Swap(iFirstNum, iSecondNum);

    cout << "After : " << iFirstNum << ", "
         << iSecondNum << endl;
}