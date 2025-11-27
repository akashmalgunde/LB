#include<stdio.h>

float Area()
{
    float fPi = 3.14;
    float fRadius = 10;
    float fArea = 0;

    fArea = fPi * fRadius * fRadius;
    
    return fArea;
}

int main()
{
    float fRet = 0.0;

    fRet = Area();

    printf("Area is : %f",fRet);

    return 0;
}