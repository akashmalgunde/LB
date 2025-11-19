#include<stdio.h>

void DisplayDigit(int iValue)
{
    int iDigit = 0;
    for(;iValue != 0;iValue = iValue / 10)
    {
        iDigit = iValue % 10;
        printf("%d\t",iDigit);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    DisplayDigit(iNo);

    return 0;
}