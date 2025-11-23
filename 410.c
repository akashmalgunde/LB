#include<stdio.h>

void DisplaySecondLast(int *Arr,int iSize)
{
    int iMax = Arr[0];
    int iSecond = 0;
    for(int i =1; i < iSize; i++)
    {
        if(iMax < Arr[i])
            iMax = Arr[i];
    }

    iSecond = Arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iSecond < Arr[i] && Arr[i] != iMax)
            iSecond = Arr[i];
    }
    printf("%d is second large\n",iSecond);
}

int main()
{

    int Arr[5] = {10,11,12,13,14};

    DisplaySecondLast(Arr,5);

    return 0;
}