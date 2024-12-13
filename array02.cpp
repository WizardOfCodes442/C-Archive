#include <iostream>
using namespace std;

double getAverage(int array[], int size){
    int i, sum= 0;
    double avg;
    for(i=0; i < size; ++i){
        sum += array[i];
    }
    avg = (double) sum/size;
    return avg;
}

int main()
{
    double avg;
    //an array of 5 int
    int n[5] = {1000,202,303,404,1}
    avg = getAverage(n, 5);
    cout<<"average of {1000, 202, 303, 404,1} is: "<< avg <<endl;
    return 0;
}