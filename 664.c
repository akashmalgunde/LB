#include<stdio.h>

int CalculateSum(int iNo)
{
    int iDigit = 0;
    int iSum = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum *= iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the no:\n");
    scanf("%d",&iNo);

    iRet = CalculateSum(iNo);

    printf("%d\n",iRet);

    return 0;
}