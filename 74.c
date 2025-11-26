#include<stdio.h>

void Add()
{
    int iCnt = 0;
    int iSum = 0;

    iCnt = 1;
    while(iCnt <= 5)
    {
        iSum = iSum + iCnt;
        iCnt++;

    }

    printf("Summation of number from 1 to 5 is : %d\n",iSum);
}


int main()
{
    Add();

    return 0;
}


/*

    int iCnt = 0;
    int iSum = 0;

    iCnt = 1;
    while(iCnt <= 5)
    {
        iSum = iSum + iCnt;
        iCnt++;

    }

    printf("Summation of number from 1 to 5 is : %d\n",iSum);


    iCnt    0   1   2   3   4   5   6
    iSum    0   1   3   6   10  15

    Cmd Prompt
    Summation of number from 1 to 5 is : 15


*/