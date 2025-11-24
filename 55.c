#include<stdio.h>

void CalculatePerimeter()
{
    int iLen = 10;
    int iBred = 5;

    int iPer = 0;

    iPer = 2 * (iLen + iBred);

    printf("Perimeter of Rectangle is %d\n",iPer);
}

int main()
{
    CalculatePerimeter();

    return 0;
}