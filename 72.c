#include<stdio.h>

void Display()
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= 10)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}


int main()
{
    Display();

    return 0;
}


/*

    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= 10)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }


    iCnt    0   1   2   3   4   5   6   7   8   9   10  11

    Cmd Prompt

    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
*/