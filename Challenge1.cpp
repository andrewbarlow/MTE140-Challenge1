// Challenge 1 - Data Structures & Algorithms - Andrew Barlow

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int array3min(int A[], int B[], int C[], int Asize, int Bsize, int Csize)
{
    int minDiff = max(max(abs(A[0] - B[0]), abs(B[0] - C[0])), abs(C[0] - A[0]));

    for(int i = 0; i < Asize; i++)
    {
        for(int j = 0; j < Bsize; j++)
        {
            for(int k = 0; k < Csize; k++)
            {
                if((max(max(abs(A[i] - B[j]), abs(B[j] - C[k])), abs(C[k] - A[i]))) < minDiff)
                    minDiff = max(max(abs(A[i] - B[j]), abs(B[j] - C[k])), abs(C[k] - A[i]));
                if(minDiff == 0)
                    return minDiff;
            }
        }
    }
    return minDiff;
}

int main()
{
    int arrA[] = {1, 3, 10};
    int arrB[] = {4, 5};
    int arrC[] = {7, 8, 33, 104};

    cout << "The minimum difference value is: " << array3min(arrA, arrB, arrC, 3, 2, 4);
}
