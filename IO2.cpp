//IO.cpp defines the entry point 
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
    cout << "What is your name? " << endl;

    string name {};
    cin >> name;
    cout << " you said your name is : " << name << endl;
    return 0;
}