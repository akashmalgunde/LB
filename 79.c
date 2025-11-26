#include<stdio.h>

void CheckStrong()
{
    int iNum = 14;
    int iOrig = iNum;
    int iCnt = 0;
    int iDigit = 0;
    int iStrong = 0;
    int iFact = 1;

    while(iNum != 0)
    {
        iDigit = iNum % 10;
        iCnt = 1;
        iFact = 1;

        while(iCnt <= iDigit)
        {
            iFact = iFact * iCnt;
            iCnt ++;
        }

        iStrong = iStrong + iFact;
        iNum = iNum / 10;
    }
    if(iStrong == iOrig)
    {
        printf("%d is a strong number\n",iOrig);
    }
    else
    {
        printf("%d is not a strong number\n",iOrig);
    }
}

int main()
{
    CheckStrong();

    return 0;
}