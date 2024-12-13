//demonstrates variables  scoped within a block
#include <iostream>
using namespace std;

void myFunc();

int main()
{
    int x = 5;
    cout << "\n In main x is " << x;
    myFunc();
    
    cout << "\nBack in main, x is : " << x;
    return 0;
}

void myFunc()
{
    int x = 8;
    cout << "\n In myFunc, local x : " << x << endl;

    {
        cout << "\nIn block in myFunc, x is: " << x;
        int x = 9;

        cout << "very local x : " << x;
    }
    cout << "\nOut of block, in myFunc , x : " << x  << endl;
}