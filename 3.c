#include<stdio.h>

int main()
{
    int iNo = 1634;
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }

    return 0;
}