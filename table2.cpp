//tablearg.cpp
//demonstrates function arguments

#include <iostream>
using namespace std;

void repchar(char, int);       // function declaration
int main()
{
    repchar('-', 43);          // call to function
    cout << "Data       type        Range"  << endl;
    repchar('=', 23);
    cout << "char                       -128 to 127" << endl
         << "short                      -32, 768 to 32, 767" << endl
         << "int                        SYSTEM DEPENDENT"  << endl
         << "double                     -2, 147,  483, 648 to 2, 147, 483, 647" << endl;
    repchar('-', 43);
    return 0;
}
//-----------------------------------------------------------
// repchar
// function definition 
void repchar(char ch, int n) {
    for (int i =0; i < n; i++)
        cout << ch;
    cout << endl;
}