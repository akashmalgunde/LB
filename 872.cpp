#include<iostream>
using namespace std;

void swapArray(int *iPtr,int iSize)
{
    int iPres = 0;
    for(int iIter = 1,i = 0, j = iSize - 1; iIter <= iSize /2; iIter++,i++,j--)
    {
        iPres = iPtr[i];
        iPtr[i] = iPtr[j];
        iPtr[j] = iPres;
    }
}

void display(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
        printf("%d ",Arr[i]);

    printf("\n");
}

int main()
{   
    int Arr[] = {1, 2, 3, 4};

    display(Arr,4);
    swapArray(Arr,4);
    display(Arr,4);

    

    return 0;
}