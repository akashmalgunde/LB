#include<stdio.h>

void CheckEven(int iValue)
{
    int iDigit = 0;
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit % 2 == 0)
            printf("%d",iDigit);

        iValue = iValue / 10;
    }

}

int main()
{
    int iNo = 0;
    //int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    CheckEven(iNo);

    //printf("%d is the max among all digits of %d\n",iRet,iNo);

    return 0;
}