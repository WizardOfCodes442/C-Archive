#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 1;
    delete p;
    *p = 2;
    cout << p << endl;
}