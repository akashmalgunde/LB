#include<stdio.h>
#define bool int 
#define true 1 
#define false 0 

int checkCount(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }

    return iCnt;
}

int calculateower(int iCnt,int iNo)
{
    int iPower = 1;

    for(int i = 1; i <= iCnt; i++)
    {
        iPower = iPower * iNo;
    }

    return iPower;
}

bool checkArmstrong(int iNo)
{
    int iCount = checkCount(iNo);
    //printf("%d\n",iCount);
    int iSum = 0; 
    int iDigit = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + calculateower(iCount,iDigit);

        //printf("%d\n",iSum);

        iNo = iNo / 10;

    }

    if(iSum == iTemp)
        return true;

    else 
        return false;


    
}

int main()
{
    int iNo = 0;
    bool bRet = false;


    printf("Enter no:\n");
    scanf("%d",&iNo);

    bRet = checkArmstrong(iNo);

    bRet == true ? printf("%d is armstrong\n",iNo) : printf("%d is not armstrong\n",iNo);





    return 0;
}