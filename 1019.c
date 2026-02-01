#include<stdio.h>
#include<stdbool.h>

bool checkDigit(int iTemp,int iDigit)
{
    bool bRet = false;

    while(iTemp != 0)
    {
        if(iDigit == iTemp % 10)
        {
            bRet = true;
            break;
        }
        iTemp = iTemp / 10;
    }
    return bRet;
}

bool checkRepeatation(int iNo)
{
    bool bRet = false;
    int iTemp = 0;
    int iDigit = 0;

    iTemp = iNo;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        if(checkDigit(iTemp / 10,iDigit))
        {
            bRet = true;
            break;
        }
        iTemp = iTemp / 10;
    }

    return bRet;
}

int main()
{

    int iNo = 0;
    bool bRet = false;

    printf("enter the number:");
    scanf("%d",&iNo);

    bRet = checkRepeatation(iNo);

    if(bRet == true)
        printf("repeatation is available\n");
    else
        printf("Repeatation is not available\n");

    return 0;
}