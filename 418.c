#include<stdio.h>

int CheckMin(int iNo)
{
    int iMin = 9;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }

    return iMin;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = CheckMin(iNo);

    printf("Minimum is  %d in : %d\n",iRet,iNo);

    return 0;
}