#include<stdio.h>

int CalculatePower(int iBase,int iPower)
{
    int iAns = 1;

    for(int iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iAns = iAns * iBase;
    }

    return iAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter the base:");
    scanf("%d",&iNo1);

    printf("Enter the power:");
    scanf("%d",&iNo2);

    iRet = CalculatePower(iNo1,iNo2);

    printf("%dth Power of %d is : %d\n",iNo2,iNo1,iRet);

    return 0;
}