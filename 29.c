#include<stdio.h>

void DisplayFactor(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue/2; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{

    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    DisplayFactor(iNo);

    return 0;
}



/*

Algorithm

Start

    Accept number from user as iNo

    take a loop iterate it till that number (Time Complexity O(N))
    iterate till the half(Time Complexity O(N/2))

    Take if else if number is getting divided by the it then display it

Stop


iNo     0   6

iValue  6

iCnt    0   1   2   3   4

Cmd Prompt  
1
2
3

for(iCnt = 1; iCnt <= iValue/2; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            printf("%d",iCnt);
        }
    }






*/