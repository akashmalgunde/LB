#include<stdio.h>

int factorSumDiff(int iNo)
{
    int iSumFactor = 0;
    int iSumNonFactor = 0;
    if(iNo < 0)
    {
        printf("Enter the positive number\n");
        return 0;   
     }
    for(int i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSumFactor = iSumFactor + i; 
        }
        else
        {
            iSumNonFactor = iSumNonFactor + i;
        }
    }

    return iSumFactor - iSumNonFactor;
}

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the number:");
    scanf("%d",&iNo);

    iRet = factorSumDiff(iNo);

    printf("%d is difference between factors and non factors\n",iRet);

    return 0;
}