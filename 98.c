#include<stdio.h>

int CalculateHour()
{
    int iMin = 70;
    int iHr = 0;
    
    iHr = iMin / 60;
    iMin = iMin % 60;

    return iHr;
}

int main()
{
    int iRet = 0;

    iRet = CalculateHour();

    printf("Minute in hour is : %d",iRet);

    return 0;
}