#include<stdio.h>

void Display(int iValue)
{
    //Filter
    if(iValue < 0)
    {
        printf("Please enter the positive number\n");
        return;
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
    return 0;
}