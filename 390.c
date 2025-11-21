#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

void Count(int *Arr,int iSize)
{
    int iRet = 0;

    for(int i = 0; i < iSize; i++)
    {
        iRet = CountEven(Arr[i]);
        printf("%d is count of even number in %d\n",iRet,Arr[i]);
    }
}

int main()
{
    int Arr[5] = {645665,45151361,651651,161556,65161};

    Count(Arr,5);

    return 0;
}