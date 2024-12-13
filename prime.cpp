//prime.cpp
//demonstrates IF statements with prime numbers

#include <iostream>
#include <process.h>    //for exit

using namespace std;

int main() {
    unsigned long n, j;

    cout << "Enter a number: ";
    cin >> n;   // get number to test

    for (j=2; j<= n/2; j++ ){ // divide by every integer from 2 on up; if remainder is 0,
        if (n % j == 0) {
            cout << "It's not prime; divisible by " << j << endl;
            exit(0);    // exit from the program
        }
        
    }
    cout << "It's prime\n";
    return 0;
}