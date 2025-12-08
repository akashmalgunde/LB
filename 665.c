#include<stdio.h>

int CalculateSum(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt += 1;
        iNo = iNo / 10;
    }

    return iCnt;;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the no:\n");
    scanf("%d",&iNo);

    iRet = CalculateSum(iNo);

    printf("%d\n",iRet);

    return 0;
}