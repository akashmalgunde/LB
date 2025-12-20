#include<stdio.h>

int CountDivisor()
{
    int iCount = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iRet = 0;

    iRet = CountDivisor();

    printf("Total no are:%d\n",iRet);

    return 0;
}