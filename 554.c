#include<stdio.h>

void DisplayDigit(int *Arr,int iSize)
{
    int iNo = 0;
    int iDigit = 0;

    for(int i = 0; i < iSize; i++)
    {
        iNo = Arr[i];
        printf("%d - ",iNo);
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            printf("%d ",iDigit);
            iNo = iNo / 10;
        }
        printf("\n");
    }
}

int main()
{
    int Arr[5] = {10,20,30,15,56};

    DisplayDigit(Arr,5);

    return 0;
}