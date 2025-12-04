#include<stdio.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 25; iCnt++)
    {
        if(iCnt % 5 == 0)
        {
            printf("%d is divisible by 5\n",iCnt);
        }
    }

    return 0;
}