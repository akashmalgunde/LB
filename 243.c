#include<stdio.h>

int main()
{
    int iNo = 55151;
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }

    printf("%d\n",iCnt);

    
    return 0;
}