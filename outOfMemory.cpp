#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
    const int BLOCK_SIZE = 0x7FFFFFFF;
    void* pBlock = new (nothrow) char[BLOCK_SIZE];
    if (pBlock != NULL)
    {
        cout << "OK.";
        //...
        delete [] pBlock;
    }
    else
    {
        cout << "out of memory.";
    }
}