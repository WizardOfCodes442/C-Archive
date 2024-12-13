#include <iostream>
using namespace std;

struct Distance  // English distance
{
    int feet;
    float inches;
};

int main {
    Distance d1, d3;    // define two lenght variables
    Distance d2 = {11, 6.25}; // declare and initialize two lenght variable

    cout << "\nEnter feet: "; cin >> d1.feet;
    cout << "Enter inches: "; cin >> d1.inches;
    
    d3.inches = d1.inches + d2.inches;
    d3.feet = 0;

    if (d3.inches >= 12.0) // if total exceeds 12.0
    {
        d3.inches -= 12.0;
        d3.inches++;
    }
    d3.feet = d1.feet + d2.feet; // add the feet

    // display all the length
    cout << d1.feet << "\'-" << d1.inches << "\" + ";
    cout << d2.feet << "\'-" << d2.inches << "\" + ";
    cout << d3.feet << "\'-" << d3.inches << "\" + ";

    return 0;

}