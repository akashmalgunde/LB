#include<stdio.h>

double CalculateSal()
{
    double dBasicSal = 0.0f;
    double dDa = 0.0;
    double dTa = 0.0;
    double dHra = 0.0;
    double dTotalSal = 0.0;

    printf("Enter your basic salary:\n");
    scanf("%lf",&dBasicSal);

    
    
    if(dBasicSal <= 5000)
    {
        dDa = dBasicSal * 10 / 100;
        dTa = dBasicSal * 20 / 100;
        dHra = dBasicSal * 20 / 100;
    }
    else
    {
        dDa = dBasicSal * 15 / 100;
        dTa = dBasicSal * 25 / 100;
        dHra = dBasicSal * 30 / 100;
    }

    dTotalSal = dBasicSal + dDa + dTa + dHra;

    return dTotalSal;


}

int main()
{
    double dRet = 00.0f;

    dRet = CalculateSal();

    printf("%lf is the total salary\n",dRet);

    return 0;
}



/*
    dRet    00.0        150

    dBasicSal   0.0     100
    dDa         0.0     10
    dTa         0.0     20
    dHra        0.0     20
    dTotalSal   0.0     150


    cmd prompt

    150 is the total salary








    double dBasicSal = 0.0f;
    double dDa = 0.0;
    double dTa = 0.0;
    double dHra = 0.0;
    double dTotalSal = 0.0;

    printf("Enter your basic salary:\n");
    scanf("%lf",&dBasicSal);

    
    
    if(dBasicSal <= 5000)
    {
        dDa = dBasicSal * 10 / 100;
        dTa = dBasicSal * 20 / 100;
        dHra = dBasicSal * 20 / 100;
    }
    else
    {
        dDa = dBasicSal * 15 / 100;
        dTa = dBasicSal * 25 / 100;
        dHra = dBasicSal * 30 / 100;
    }

    dTotalSal = dBasicSal + dDa + dTa + dHra;

    return dTotalSal;



*/