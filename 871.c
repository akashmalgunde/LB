#include<stdio.h>
#include<stdbool.h>

int calCount(int iNo)
{
    int iCount = 0;
    while (iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
    
}

int calPowerof10(int iPower)
{
    int iRet = 1;
    for(int i = 1; i <= iPower; i++)
    {
        iRet = iRet * 10;
    }

    return iRet;
}

bool checkDuck(int iNo)
{
    int iCount = 0;
    int iPowerof10 = 0;
    int iDigit = 0;
    bool bRet = false;

    iCount = calCount(iNo);
    iPowerof10 = calPowerof10(iCount);

    iDigit = iNo / iPowerof10;

    printf("%d is the digit\n",iDigit);

    if(iDigit != 0)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = checkDuck(iNo);

    if(bRet == true)
        printf("%d is Duck Number\n",iNo);

    else
        printf("%d is not Duck Number\n",iNo);

    return 0;
}