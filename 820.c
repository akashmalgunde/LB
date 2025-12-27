#include<stdio.h>

int checkDif(int iNo)
{
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
            iEvenSum = iDigit + iEvenSum;
        else
            iOddSum = iDigit + iOddSum;
        iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("enter the number:");
    scanf("%d",&iNo);

    iRet = checkDif(iNo);

    printf("Difference is : %d",iRet);

    return 0;
}