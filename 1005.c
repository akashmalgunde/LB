#include<stdio.h>

int calSingle(int iNo)
{
    int iTemp = 0;
    int iSum = 0;
    int iDigit = 0;

    //printf("Inside calSingle\n");
    iTemp = iNo;
    //printf("%d\n",iTemp);
    while(!(iTemp >= 0 && iTemp <= 9))
    {
        //printf("Inside first while\n");
        iSum = 0;
        while(iTemp != 0)
    {
        //printf("Inside inner while\n");
        iDigit = iTemp % 10;
        iSum = iSum + iDigit;
        iTemp = iTemp / 10;
    }
   // printf("%d\n",iSum);
    iTemp = iSum;
    }

    return iTemp;
}

int main()
{

    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = calSingle(iNo);

    printf("%d",iRet);
    return 0;
}