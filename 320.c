#include<stdio.h>

int CountDivisor(int iValue1,int iValue2)
{
    int iCount = 0;
    for(int i = 1; i <= iValue1; i++)
    {
        if(i % iValue2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter the number till you want to go:\n");
    scanf("%d",&iNo1);

    printf("Enter the number from which you want to divide:\n");
    scanf("%d",&iNo2);

    iRet = CountDivisor(iNo1,iNo2);

    printf("Total no are:%d\n",iRet);

    return 0;
}