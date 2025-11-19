#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{

    Display();

    return 0;
}

/*

iCnt    0   1   2   3   4   5   6


Cmd Prompt
1
2
3
4
5


for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iCnt);
    }



*/