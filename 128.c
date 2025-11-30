#include<stdio.h>

int CalculateSum(int iValue)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    iRet = CalculateSum(iNo);

    printf("Ans is : %d",iRet);

    return 0;
}


/*

    iNo     0       5
    iRet    0       15

    iValue  5

    iCnt    0       1       2       3       4       5       6
    iSum    0       1       3       6       10      15



    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;

    cmd prompt
    Enter the number:5

    Ans is : 15

*/