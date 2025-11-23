#include<stdio.h>

void CalculateFar()
{
    int iCel = 10;

    double dFer = 0.0;

    dFer = (iCel * 1.8) + 32;

    printf("Fernite value of given celcius is : %lf\n",dFer);
}

int main()
{
    CalculateFar();

    return 0;
}