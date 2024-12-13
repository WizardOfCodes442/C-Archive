//Area.cpp
//demonstrate a function prototype

#include <iostream>
using namespace std;

int Area(int length, int width); // function prototype

int main()
{
    int lengthOfYard;
    int widthOfYard;
    int areaOfYard;

    cout <<"\n How wide is your yard? ";
    cin >> widthOfYard;
    cout <<"\n How long is your yard? ";
    areaOfYard = Area(lengthOfYard, widthOfYard);
    cout << "\n your yard is "
         << areaOfYard;
         << " squarefeet\n\n"
         <<endl;
    
    

}

int Area(int length, int width) 
{
    return length * width;
}