#include<stdio.h>

void Display(int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue;
    }

    for(int iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    Display(iNo);
}