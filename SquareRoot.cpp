#include <iostream>
using namespace std;

double SquareRoot(double dValue)
{
    const double EPSILON = 1e-12;
    double dRoot = dValue, dOldRoot = dValue;
    while (true)
    {
        dRoot = ((dValue / dRoot) + dRoot) / 2;
        cout << dRoot << endl;
        if ((dOldRoot - dRoot) <= EPSILON)
        {
            return dRoot;
        }
        dOldRoot = dRoot;
    }
}
void main()
{
    double dInput = 16;
    cout << "SquareRoot of " << dInput << ": "
         << SquareRoot(dInput) << endl;
}