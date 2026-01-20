#include<stdio.h>
#include<stdbool.h>


int calculateCount(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }

    return iCnt;
}

int calPower(int iNo,int iIndex)
{
    int iPower = 1;
    for(int i = 1; i <= iIndex; i++)
    {
        iPower = iPower * iNo;
    }
    return iPower;
}


bool checkDisarium(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    bool bRet = false;
    int iPower = 0;
    int iTemp = 0;

    iTemp = iNo;
    iCnt = calculateCount(iNo);

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iPower = calPower(iDigit,iCnt);
        //printf("%d : result of calPower\n",iPower);
        iSum = iSum + iPower;
        iTemp = iTemp / 10;
        iCnt--;
    }

    if(iSum == iNo)
        bRet = true;
    
    return bRet;
}

int main()
{
    int iNo = 0;

    printf("enter the number:\n");
    scanf("%d",&iNo);

    bool bRet = false;

    bRet = checkDisarium(iNo);

    if(bRet == true)
        printf("%d is Disarium number\n",iNo);
    else 
        printf("%d is not Disarium number\n",iNo);

    return 0;
}