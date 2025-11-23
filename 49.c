#include<stdio.h>

void Area()
{
    float fPi = 3.14;
    float fRadius = 10;
    float fArea = 0;

    fArea = fPi * fRadius * fRadius;
    printf("Area of Circle is: %f\n",fArea);
}

int main()
{
    Area();
    

    return 0;
}