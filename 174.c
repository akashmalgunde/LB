#include<stdio.h>

void CheckDivisibility(int iValue,int iDivisor)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        if(iCnt % iDivisor == 0)
        {
            printf("%d is divisor of %d\n",iDivisor,iCnt);
        }
    }
}

int main()
{
    int iCnt = 0;
    int iDivisor = 0;

    printf("Enter the number:");
    scanf("%d",&iCnt);

    printf("Enter the Divisor:");
    scanf("%d",&iDivisor);

    CheckDivisibility(iCnt,iDivisor);

    return 0;
}