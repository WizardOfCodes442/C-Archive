#include <iostream>
using namespace std;
int main(int iArgCount, char* vpValues[])
{
    cout << "Path name: " << vpValues[0] << endl;
    cout << "Parameters: ";
    for (int iIndex = 1; iIndex < iArgCount; ++iIndex)
    {
        cout << vpValues[iIndex] << " ";
    } 
}