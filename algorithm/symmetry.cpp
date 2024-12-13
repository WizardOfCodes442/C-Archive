#include <iostream>
using namespace std;
int[] difference(int[] A, int[] B)
{
    int difference[];
    int count;
    for (int i = 0; i < 5, ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (A[i] != B[j] )
            {
                difference[count] = A[i];
                ++count;
            }
        }
    }
    return difference;

}

void main()

{
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {2, 4, 6, 8, 10};
    int C[];
    C = difference(A, B);
    cout << "{ ";
    for (int i; i < 5; ++i)
    {
        cout << C[i] <<" ";
    }
    cout << " }" << endl;




}