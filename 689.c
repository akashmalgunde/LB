#include<stdio.h>

int CalSum(int iNo,int iDiv)
{
    int iSum = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % iDiv == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;
    int iDiv = 0;
    int iRet = 0;

    printf("Enter the no : \n");
    scanf("%d",&iNo);

    printf("Enter the divisible :\n");
    scanf("%d",&iDiv);



    iRet = CalSum(iNo,iDiv);

    printf("%d is sum of divivsible of 2\n",iRet);



    return 0;
}