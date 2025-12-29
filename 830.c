#include<stdio.h>

int checkSecondBigger(int *iArr,int iSize)
{
    int iMax = iArr[0];
    int iSecMax = 0;

    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] > iMax)
        {
            iSecMax = iMax;
            iMax = iArr[i];
        }
        else if(iArr[i] > iSecMax)
        {
            iSecMax = iArr[i];
        }
    }

    return iSecMax;
}

int main()
{
    int iArr[] = {10,25,5,20};
    int iRet = 0;

    iRet = checkSecondBigger(iArr,4);

    printf("%d",iRet);
    return 0;
}