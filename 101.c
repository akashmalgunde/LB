#include<stdio.h>

int AreaOfTriangle()
{
    int iBase = 10;
    int iHeight = 10;

    int iArea = 0;

    iArea = 0.5 * iBase * iHeight;
    
    return iArea;
}


int main()
{
    int iRet = 0;

    iRet = AreaOfTriangle();

    printf("Area of triangle is : %d",iRet);

    return 0;
}