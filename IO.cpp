/**
Input and Output
In order to write to the standard output (normally a text window) and read from
standard input (normally the keyboard), we use streams. A stream can be thought of
as a connection between our program and a device such as the screen or keyboard.
There are predefined objects cin and cout that are used for input and output. We
use the stream operators >> and << to write to and read from a device. Similarily
to the strings above, we have to include the header file iostream and use the
namespace std.
We can write and read values of all the types we have gone through so far, even
though the logical values true and false are read and written as one and zero. The
predefined object endl represents a new line. 

*/
#include <iostream>
#include <string>
using namespace std;

void main()
{
    int i;
    double x;
    bool b;
    string s {};
    cout <<"Enter int for i" << " Enter double for x " << " Enter boolean for b " << " Enter string for s"
         << endl;
    cin >> i >> x >> b >> s;
    cout << "You wrote i: " << i << endl
         << "You wrote x: " << x << endl
         << "You wrote b : " << b << endl
         << "You wrote s : " << s << endl;
}

