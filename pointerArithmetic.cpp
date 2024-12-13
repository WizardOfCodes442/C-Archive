#include <iostream>

using namespace std;

void main()
{
    int iNumber = 100;
    int* pNumber = &iNumber + 1;
    pNumber = pNumber + 1;
    *pNumber = iNumber + 1;
    cout << "\n" << iNumber << " " << pNumber << endl;
    pNumber = pNumber + 1;
    *pNumber = iNumber + 2;
    cout << "\n" << iNumber << pNumber << endl;
    pNumber = pNumber + 1;
    *pNumber = iNumber + 3;
    cout << "\n" << iNumber << pNumber << endl;

}