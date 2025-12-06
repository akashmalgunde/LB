#include<stdio.h>

int CalSum(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter no:\n");
    scanf("%d",&iNo);

    iRet = CalSum(iNo);

    printf("%d\n",iRet);

    return 0;
}