//vararg.cpp
// demonstrate variable arguments
#include <iostream>
using namespace std;
void repchar(char, int);  // function declaration

int main() 
{
    char chin;
    int nin; 
    cout << "Enter a character: ";
    cin >> chin;
    cout << "Enter the number of times to repeat it : ";
    cin >> nin;
    repchar(chin, nin);
    return 0;
}
// ---------------------------------------------------------
// repchar()
// function definition
void repchar(char ch, int n) {
    for (int j = 0; j < n; j++)  // function body
        cout << ch;
}