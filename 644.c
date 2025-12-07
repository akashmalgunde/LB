#include<stdio.h>

double CheckBill(int iDays,double dRate)
{
    double dBill = 0.0;
    dBill = iDays * dRate;

    return dBill;
}

int main()
{
    int iDays = 0;
    double dRate = 0.0;
    double dRet = 0.0;
    double dSum = 0.0;


    printf("Enter total days:");
    scanf("%d",&iDays);

    printf("Enter the rate:");
    scanf("%lf",&dRate);

    dRet = CheckBill(iDays,dRate);
    printf("%lf\n",dRet);

    dSum = dSum + dRet;

    printf("Enter total days:");
    scanf("%d",&iDays);

    printf("Enter the rate:");
    scanf("%lf",&dRate);

    dRet = CheckBill(iDays,dRate);
    printf("%lf\n",dRet);

    dSum = dSum + dRet;

    printf("Total is : %lf\n",dSum);

    return 0;
}