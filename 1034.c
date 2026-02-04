#include<stdio.h>
#include<stdbool.h>

int calculateSquare(int iNo)
{
    return iNo * iNo;
}

int calculateSumSquare(int iNo)
{
    int iSum = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + calculateSquare(iDigit);
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkHappy(int iNo)
{
    int iSum = 0;
    bool bRet = false;
    
    while(!(iNo >= 0 && iNo <= 9))
    {
        iNo = calculateSumSquare(iNo);
        printf("%d\n",iNo);
    }

    if(iNo == 1)
         bRet = true;
    
    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkHappy(iNo))
        printf("Happy");
    else 
        printf("Not Happy\n");

    return 0;
}