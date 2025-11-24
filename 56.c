#include<stdio.h>

void CalculateAreaOfTriangle()
{
    int iBase = 10;
    int iHeight = 10;

    int iArea = 0;

    iArea = 0.5 * iBase * iHeight;
    printf("Area of Triangle is %d\n",iArea);
}

int main()
{
    CalculateAreaOfTriangle();

    return 0;
}