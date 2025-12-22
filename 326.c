#include<stdio.h>

int iSum(int iValue)
{
    int iSum = 0;
    int iDigit = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iSum = iSum + iDigit;
        iValue = iValue / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = iSum(iNo);
    printf("sum is %d\n",iRet);

    return 0;
}