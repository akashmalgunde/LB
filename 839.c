#include<stdio.h>

int checkCount(int *Arr,int iSize)
{
    int iCnt = 0;
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
            iCnt++;
    }

    return iCnt;
}

int main()
{
    int iArr[] = {10, 15, 20, 23, 30};

    int iCount = 0;

    iCount = checkCount(iArr,5);

    printf("%d is count of even number in an array\n",iCount);

    return 0;
}