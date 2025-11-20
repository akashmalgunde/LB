#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    //Updator
    if(iValue < 0)
    {
        iValue = -iValue;
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


/*
iNo     5

iValue  5

iCnt    0   1   2   3   4   5   6

Cmd Prompt
1
2
3
4
5

for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\n",iCnt);
    }



*/









/*

algorithm

start

    accept a number from user as iNo

    take a loop iterate it till the iNo

    print the number 

stop


*/