#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    if(iValue < 0)
    {
        printf("Invalid Input\n");
        printf("Please Enter the positive number.\n");
        return;
    }

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{

    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}