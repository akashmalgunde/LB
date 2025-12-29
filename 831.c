#include<stdio.h>

int countEvenDigit(int iNo)
{
    int iDigit = 0;
    int iEvenCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
            iEvenCount++;
        iNo = iNo / 10;
    }

    return iEvenCount;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    iRet = countEvenDigit(iNo);

    printf("%d",iRet);
    return 0;
}