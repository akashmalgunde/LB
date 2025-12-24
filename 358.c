#include<stdio.h>

int CheckMax(int iValue)
{
    int iMax = 0;
    int iDigit = 0;
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iMax < iDigit)
            iMax = iDigit;

        iValue = iValue / 10;
    }

    return iMax;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = CheckMax(iNo);

    printf("%d is the max among all digits of %d\n",iRet,iNo);

    return 0;
}