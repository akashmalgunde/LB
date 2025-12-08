#include<stdio.h>

int CalculateAddition(int iNo1,int iNo2)
{
    int iRet = 0;

    iRet = iNo1 + iNo2;

    return iRet;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter no:\n");
    scanf("%d",&iNo1);

    printf("Enter no:\n");
    scanf("%d",&iNo2);

    int iRet = 0;

    iRet = CalculateAddition(iNo1,iNo2);

    printf("%d\n",iRet);

    return 0;
}