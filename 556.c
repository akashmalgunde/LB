#include<stdio.h>

void DisplayDigit(int iNo)
{

    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d ",iDigit);
        iNo = iNo / 2;
    }
}


void IterateArray(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("%d - ",Arr[i]);
        DisplayDigit(Arr[i]);
        printf("\n");
    }
}

int main()
{
    int Arr[5] = {10,20,30,15,56};

    IterateArray(Arr,5);

    return 0;
}