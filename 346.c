#include<stdio.h>

void DisplayEven(int iValue)
{
    int iDigit = 0;
    while(iValue != 0)
    {
        iDigit = iValue % 10;

        if(iDigit % 2 == 0)
        {
            printf("%d ",iDigit);
        }

        iValue = iValue / 10;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    DisplayEven(iNo);

    return 0;
}