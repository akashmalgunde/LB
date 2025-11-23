#include<stdio.h>

int CheckMax(int iNo)
{
    int iMax = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }

    return iMax;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = CheckMax(iNo);

    printf("Maximum is  %d in : %d\n",iRet,iNo);

    return 0;
}