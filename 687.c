#include<stdio.h>

int CalSum(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        if((iNo % 10) % 2 == 0)
        {
            iSum = iSum + (iNo % 10);
        }
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the no : \n");
    scanf("%d",&iNo);

    iRet = CalSum(iNo);

    printf("%d is sum of divivsible of 2\n",iRet);



    return 0;
}