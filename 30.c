#include<stdio.h>

int SumFactor(int iValue)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue / 2; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;


}

int main()
{

    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = SumFactor(iNo);

    printf("Sum is:%d",iRet);

    return 0;
}


/*

Algorithm

Start
    Accept one number from user as iNo

    For loop 1 - iNo

    if iNo % iCnt == 0
        iSum = iSum + iCnt
    
    iSum print
Stop


iNo     0   6

iRet    0

iValue  6

iCnt    0   1   2   3   4

iSum    0   1   3   6


for(iCnt = 1; iCnt <= iValue / 2; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

Cmd Prompt



*/