#include<stdio.h>

int CalPerimeter()
{
    int iLen = 10;
    int iBred = 5;

    int iPer = 0;

    iPer = 2 * (iLen + iBred);

    return iPer;
}

int main()
{
    int iRet = 0;

    iRet = CalPerimeter();

    printf("Perimeter of Rectangle is %d\n",iRet);

    return 0;
}