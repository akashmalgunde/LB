#include<stdio.h>

int CalculateSumFL(int iValue)
{
    int iCount = 0;
    int iSum = 0;
    int iCnt = 0;
    int iTemp = iValue;
    int iDigit = 0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    while(iTemp != 0)
    {
        iTemp = iTemp / 10;
        iCount++;
    }
    for(iCnt=1; iCnt <= iCount; iCnt++)
    {
        iDigit = iValue % 10;

        if(iCnt == 1 || iCnt == iCount)
        {
            iSum = iSum + iDigit;
        }
        iValue = iValue / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    iRet = CalculateSumFL(iNo);

    printf("sum of first and last digit of %d is : %d",iNo,iRet);

    return 0;
}


/*

    iNo     0       527
    iRet    0       12


    iValue  527     52      5
    iCount  0       1       2       3
    iSum    7       12
    iCnt    0       1       2       3       4
    iTemp   527     52      5       0
    iDigit  7       2       5



    cmd prompt
    Enter the number:527

    sum of first and last digit of 527 is 12



    int CalculateSumFL(int iValue)
{
    int iCount = 0;
    int iSum = 0;
    int iCnt = 0;
    int iTemp = iValue;
    int iDigit = 0;

    while(iTemp != 0)
    {
        iTemp = iTemp / 10;
        iCount++;
    }
    for(iCnt=1; iCnt <= iCount; iCnt++)
    {
        iDigit = iValue % 10;

        if(iCnt == 1 || iCnt == iCount)
        {
            iSum = iSum + iDigit;
        }
        iValue = iValue / 10;
    }

    return iSum;
}

*/