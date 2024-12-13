/*
The program below tries to allocate a large chunk of memory . It 
returns zero if it turns out well, minus one otherwise.
*/
#include <cstdlib>
int main()
{
    const int BLOCK_SIZE = 7FFFFFFF;
    void* pBlock = new (nothrow) char[BLOCK_SIZE];

    if (pBlock != NULL)
    {
        //...
        delete [] pBlock;
        return 0;
    }
    return -1;
}