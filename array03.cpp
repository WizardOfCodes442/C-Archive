#include <iostream>
#include <ctime>

using namespace std;
//function to generate and return random number
int* getRandom() {
    static int r[10];

    //set the seed
    srand((unsigned) time(NULL));
    for (int i=0 ; i< 10; ++i){
        r[i] = rand();
        cout<< r[i] << endl;

    }
    return r;
}

//main function to call the above main function
int main() {
    // a pointer to an integer
    int *p;
    p = getRandom();
    for (int i = 0; i < 10; ++i){
        cout<< "*(p + " << i << ") :  ";
        cout <<*(p+i) << endl;
    }
    return 0;
}