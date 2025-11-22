#include<stdio.h>

long int CalculatePower(int iBase,int iPower)
{
    long int iResult = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }

    return iResult;
}

int main()
{

    int iNo1 = 0;
    int iNo2 = 0;
    long int iRet = 0;

    printf("Enter the base:\n");
    scanf("%d",&iNo1);

    printf("Enter the power:\n");
    scanf("%d",&iNo2);

    iRet = CalculatePower(iNo1,iNo2);

    printf("Result is: %d",iRet);

    return 0;
}


/*

Algorithm

Start
    Accept Base and power from user

    iterate loop from 1 to power

    Display the result

Stop

iNo1    0   3
iNo2    0   3

iRet    0

iBase   3
iPower  3

iResult 1   3   9   27
iCnt    0   1   2   3   4 





int CalculatePower(int iBase,int iPower)
{
    int iResult = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }

    return iResult;

*/