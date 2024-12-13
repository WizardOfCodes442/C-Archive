#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;

int main() {
    int n[10]; //n is an array of ten intergers
    //initialiaze elements of array n to 0
    for(int i = 0 ; i < 10; i++){
        n[i] = i + 100; //set element at location i to i+100
    }
    cout <<"Element "<< setw(13) <<"Value" <<endl;
    //output the element of the array

    for (int j = 0 ; j < 10; j++) {
        cout<<setw(7)<< j << setw(13) << n[j] << endl;

    }

    return 0;


}