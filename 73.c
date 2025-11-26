#include<stdio.h>

void Display()
{
    int iCnt =0;
    iCnt = 1;

    while(iCnt <= 10)
    {
        printf("%d\n",iCnt*5);
        iCnt++;
    }
}

int main()
{
    Display();

    return 0;
}

/*

    iCnt    0   1   2   3   4   5   6   7   8   9   10  11

    Cmd Prompt
    5
    10
    15
    20
    25
    30
    35
    40
    45
    50


*/