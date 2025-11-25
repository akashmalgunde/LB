#include<stdio.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d Start",iCnt);
        if(iCnt == 5)
        {
            continue;
        }
        printf("End\n");
    }
    return 0;
}

/*
10

iCnt    0   1   2   3   4   5   6   7   8   9   10  11

1 startEnd
2 StartEnd
3 StartEnd
4 StartEnd
5 Start6 StartEnd
7 StratEnd
8 StartEnd
9 StartEnd
10 StartEnd



*/