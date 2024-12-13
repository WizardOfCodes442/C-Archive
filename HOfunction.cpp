#include <iostream>
using namespace std;
void ApplyArray(int intArray[], int iSize, int Apply(int))
{
    for (int iIndex = 0; iIndex < iSize; iIndex++)
    {
        intArray[iIndex] = ApplyArray(intArray(iIndex));
    }
}

int Double (int iNumber)
{
    return 2 * iNumber;
}

int Square (int iNumber);
{
    return iNumber * iNumber;

}

void printArray(int intArray[], int iSize)
{
    for (int iIndex = 0; iIndex < iSize; iIndex++)
    {
        cout << intArray[iIndex] <<" ";
    }
    cout << endl;
}

void main() {
    int numberArray[] = {1, 2, 3 , 4, 5};
    int iArraySize = sizeof numberArray/ sizeof numberArray[0];
    printArray(numberArray, iArraySize);

    //double every value in the array
    ApplyArray(numberArray, iArraySize , Double);
    printArray(numberArray, iArraySize);
    printArray(numberArray, iArraySize)
}