#include<stdio.h>
#define bool int
#define true 1
#define false 0

int countDigit(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }

    return iCnt;
}

int tensPower(int iCnt)
{
    int iPower = 1;
    for(int i = 1; i < iCnt; i++)
    {
        iPower = iPower * 10;
    }   

    return iPower;
}

bool checkDuck(int iNo)
{
    bool bRet = false;
    int iDigit = 0;

    int iCnt = 0;
    int iPower = 0;

    iCnt = countDigit(iNo);
    iPower = tensPower(iCnt);

    if(iNo % iPower == 0)
    {
        return bRet;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bRet = true;
            break;
        }
        iNo = iNo / 10;
    }

    return bRet;
}

int main()
{

    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkDuck(iNo))
        printf("Entered number is duck number\n");
    else
        printf("Entered number is not duck number\n");

    return 0;
}