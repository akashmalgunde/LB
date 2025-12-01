#include<stdio.h>
#include<stdbool.h>

bool CheckStrong(int iValue)
{
    int iTemp = iValue;
    int iFact = 0;
    int iSum = 0;
    int iDigit = 0;
    int iCnt = 0;
    
    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iFact = 1;

        for(iCnt = iDigit; iCnt >= 1; iCnt--)
        {
            iFact = iFact * iCnt;
        }

        iSum = iSum + iFact;

        iTemp = iTemp / 10;

    }

    if(iSum == iValue)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iNo);

    bRet = CheckStrong(iNo);

    if(bRet == true)
    {
        printf("%d is strong\n",iNo);
    }
    else
    {
        printf("%d is not strong\n",iNo);
    }


    return 0;
}



/*

    calling -> os

    called -> main

    iNo     0       25
    bRet    false   false


    iValue  25
    iTemp   25      2     0  
    iFact   1       2       2
    iSum    0       120     122
    iDigit  0       2
    iCnt    0       2       1       0


    cmd prompt

    enter the number:25

    25 is not strong



    int iTemp = iValue;
    int iFact = 0;
    int iSum = 0;
    int iDigit = 0;
    int iCnt = 0;
    
    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iFact = 1;

        for(iCnt = iDigit; iCnt >= 1; iCnt--)
        {
            iFact = iFact * iCnt;
        }

        iSum = iSum + iFact;

        iTemp = iTemp / 10;

    }

    if(iSum == iValue)
    {
        return true;
    }
    else
    {
        return false;
    }

*/