#include<stdio.h>

void DisplayTable(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iCnt * iValue);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    DisplayTable(iNo);

    return 0;
}


/*

    iNo     0       25

    iValue  25

    iCnt    0       1       2       3       4       5       6       7       8       9       10      11


    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iCnt * iValue);
    }


    Cmd Prompt

    Enter the number:25

    25
    50
    75
    100
    125
    150
    175
    200
    225
    250




*/