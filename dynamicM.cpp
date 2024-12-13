#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 123;
    cout <<  &p << endl;
    cout << p << endl;
    return 0;
    delete p;
    cout << p << endl;

}