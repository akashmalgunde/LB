#include<stdio.h>

int findSecondLargest(int *iArr,int iSize)
{
    int iMax = 0;
    int iSecMax = 0;

    iMax = iArr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] > iMax)
        {
            iSecMax = iMax;
            iMax = iArr[i];
        }
    }

    return iSecMax;
}

int main()
{
    int iArr[] = {10, 5, 20, 8, -8 -10, -52, 100};

    int iRet = 0;

    iRet = findSecondLargest(iArr,8);

    printf("%d",iRet);

    return 0;
}