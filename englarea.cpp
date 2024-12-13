// demonstrate nested structure 
#include <iostream>
using namespace std;
////////////////////////////////////////////////////
struct Distance  // English distance 
{
    int feet;
    float inches;

};
//////////////////////////////////////////////////
struct Room {
    Distance length;
    Distance width;
}
///////////////////////////////////////////////////
int main()
{
    Room dining; // define a room 

    dining.length.feet = 13;  // assign values to room
    dining.length.inches = 6.5;
    dining.width.feet = 10;
    dining.width.inches = 0.0;

    // convert length and width
    float l = dining.length.feet + dining.length.inches/12;
    float w = dining.length.feet + dining.length.inches/12;

    // find the area and display it
    cout << "Dining room area is " << l * w;
         << " square feet\n";
    
    return 0;
}