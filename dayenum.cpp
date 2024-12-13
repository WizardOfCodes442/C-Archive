// dayenum.cpp
// demonstrates enum types
#include <iostream>
using namespace std;

                    // specify enum type
enum days_of_the_week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{
    // define variable of type days of the week
    days_of_the_week day1, day2;

    // give values to variables
    day1 = Mon;
    day2 = Thurs;

    // can do integer arithmetic 
    int diff = day2 - day1;   // can do integer arithmetic     
}