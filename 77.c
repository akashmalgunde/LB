#include<stdio.h>

void CheckPerfect()
{
    int iCnt = 0;
    int n = 28;
    int iSum = 0;
    iCnt = 1;

    while(iCnt <= n/2)
    {
        if(n % iCnt == 0)
        {
            iSum = iSum + iCnt;
            printf("iSum is %d\n",iSum);
        }
        iCnt++;
    }

    if(iSum == n)
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is not a perfect number\n",n);
    }
}

int main()
{
    CheckPerfect();

    return 0;
}



/*

    int iCnt = 0;
    int n = 28;
    int iSum = 0;
    iCnt = 1;

    while(iCnt <= n/2)
    {
        if(n % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }

    if(iSum == n)
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is not a perfect number\n",n);
    }

    n/2     14

    iCnt    0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15
    n       28
    iSum    0   1   3   7   14  28


Cmd Prompt
28 is a perfect number


*/