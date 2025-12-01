#include<stdio.h>
int Count(int iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCount++;
    }

    return iCount;
}

int CalculatePower(int iBase,int iPower)
{
    int iResult = 1;

    for(int iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }

    return iResult;

}

void DisplayArmstrong(int iValue)
{
    int iCnt = 0;
    

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        int iNum = iCnt;
        int iTemp = iNum;
        int iSum = 0;
        int iPower = 0;
        int iCount = 0; 
        int iDigit = 0;

        iCount = Count(iNum);

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            iPower = CalculatePower(iDigit,iCount);

            iSum = iSum + iPower;

            iTemp = iTemp / 10;
        }

        if(iSum == iCnt)
        {
            printf("iSum = %d iNum = %d\n",iSum,iCnt);
            printf("%d is armstrong\n",iCnt);
        }




    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    DisplayArmstrong(iNo);

    return 0;
}