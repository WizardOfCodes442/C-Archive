#include <iostream>
using namespace std;

float Convert(float TempFer);

int main()
{
    float TempFer;
    float TempCel;

    cout << "Please enter the Temperature in Fahrenheit: ";
    cin >> TempFer;
    TempCel = Convert(TempFer);
    cout << "\nHere's is the temperature in Celsius: ";
    cout << TempCel << endl;
    return 0;

}

float Convert(float TempFer)
{
    float TempCel;
    TempCel = ((TempFer - 32) * 5) / 9;
    return TempCel;
}