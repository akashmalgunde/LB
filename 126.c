#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

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


/*
    iNo     0       5

    iValue  5

    iCnt    0       1       2       3       4       5       6

    cmd prompt

    Enter the number:5

    1
    2
    3
    4
    5



*/