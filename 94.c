#include<stdio.h>

double CelToFer()
{
    int iCel = 10;

    double dFer = 0.0;

    dFer = (iCel * 1.8) + 32;

    return  dFer;
}

int main()
{
    double dRet = 0.0;

    dRet = CelToFer();
    
    printf("Fernite value of given celcius is : %lf\n",dRet);

    return 0;
}