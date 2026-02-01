#include<stdio.h>
#include<stdbool.h>

int calculatePower(int iNo,int index)
{
    int iPower = 1;
    for(int i = 1; i <= index; i++)
    {
        iPower = iPower * iNo;
    }

    return iPower;
}

int countDigit(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}



bool checkArmstrong(int iNo)
{
    int iTemp = 0;
    int iDigit = 0;
    bool bRet = false;
    int iSum = 0;

    iTemp = iNo;
    int iCount = 0;

    iCount = countDigit(iNo);

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iSum = iSum + calculatePower(iDigit,iCount);
        iTemp = iTemp / 10;
    }

    //printf("%d\n",iSum);
    if(iSum == iNo)
        bRet = true;
    
    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bool bRet = false;

    bRet = checkArmstrong(iNo);

    if(bRet)
        printf("%d is armstrong\n",iNo);
    else
        printf("%d is not armstrong\n",iNo);

    return 0;
}