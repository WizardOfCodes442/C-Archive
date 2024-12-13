#include <iostream>

using namespace std;

void main()
{
unsigned char a = 172; // 10101100, base 2
unsigned char b = a << 2; // 10110000, base 2 = 160, base 10
unsigned char c = 166; // 10100110, base 2
unsigned char d = c >> 2; // 00101001, base 2 = 41, base 10
cout << (int) a << " " << (int) b << " " << (int) c << " "
 << (int) d << endl;
}