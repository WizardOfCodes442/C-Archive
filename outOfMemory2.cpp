#include <iostream>

using namespace std;

void main()
{
    const int BLOCK_SIZE = 0X7FFFFFFF;
    try
    {
        void* pBlock = new char[BLOCK_SIZE];
        cout <<"OK." << endl;
        //...
        delete [] pBlock;
    
    }
    catch (bad_alloc)
    {
        cout << "out of memory." << endl;
    }

}