//lines.cpp
//A filter that number files

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    string line;
    int number = 0;

    while ( getline( cin, line)) //As long as a line can be read
    {
        cout << setw(5) << ++number <<  ": " <<
    }

}