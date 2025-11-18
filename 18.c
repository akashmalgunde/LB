#include<stdio.h>

void Display(int iValue)
{
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

/*

iValue  5

iCnt    1   2   3   4   5   6


cmd prompt
Jay Ganesh...
Jay Ganesh...
Jay Ganesh...
Jay Ganesh...
Jay Ganesh...



for(int iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }


*/