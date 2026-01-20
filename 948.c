#include<stdio.h>
#include<stdbool.h>

int calSum(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int calProduct(int iNo)
{
    int iDigit = 0;
    int iProdict = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iProdict = iDigit * iProdict;
        iNo = iNo / 10;
    }

    return iProdict;
}

bool checkSpy(int iNo)
{
    int iSum = 0;
    int iProduct = 0;
    bool bRet = false;

    iSum = calSum(iNo);
    iProduct = calProduct(iNo);

    if(iSum == iProduct)
        bRet = true;

    return bRet;
}



int main()
{
    int iNo = 0;
    bool bRet = false;


    printf("Enter the number:\n");
    scanf("%d",&iNo);


    bRet = checkSpy(iNo);

    if(bRet == true)
        printf("%d is spy number\n",iNo);
    else
        printf("%d is not spy number\n",iNo);

    return 0;
}