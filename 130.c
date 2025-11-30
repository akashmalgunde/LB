#include<stdio.h>

int CheckPerfect(int iValue)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt < iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("Enter the number:");
    scanf("%d",&iNo1);

    iRet = CheckPerfect(iNo1);

    if(iRet == 1)
    {
        printf("%d is perfect\n",iNo1);
    }
    else
    {
        printf("%d is not perfect\n",iNo1);
    }


    return 0;
}