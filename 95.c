#include<stdio.h>

int Swapping()
{
    int iValue1 = 5;
    int iValue2 = 3;
    int iTemp = 0;

    iTemp = iValue2;
    iValue2 = iValue1;
    iValue1 = iTemp;

    return iValue2,iValue1;

    
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    
    iNo2,iNo1 = Swapping();

    printf("values after swapping are: %d,%d",iNo2,iNo1);

    return 0;
}