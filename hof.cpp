#include <iostream>
using namespace std;

void ApplyArray(int intArray[], int iSize, int Apply(int)) {
    for(int iIndex = 0; iIndex < iSize; ++iIndex) {
        intArray[iIndex] = Apply(intArray[iIndex]);
    }
}

int Double(int iNumber) {
    return 2*iNumber;
}

int Square(int iNumber) {
    return iNumber * iNumber;
}

void printArray(int intArray[], int iSize) {
    for (int iIndex = 0; iIndex < iSize;  ++iIndex) {
        cout << intArray[iIndex] << " ";
    }
}
void main() {
    int numberArray[] = {1, 2, 3, 4, 5};
    int iSize = sizeof numberArray / sizeof numberArray[0];
    printArray(numberArray, iSize);
    cout << "\n";

    //Doubles every value in the array
    ApplyArray(numberArray, iSize, Double);
    printArray(numberArray, iSize);
    cout << "\n";

    //square every value in the array
    ApplyArray(numberArray, iSize, Square);
    printArray(numberArray, iSize);
    cout << "\n";
}