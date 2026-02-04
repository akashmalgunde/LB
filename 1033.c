#include<stdio.h>
#include<stdbool.h>

int calculateFactorial(int iNo)
{
    int iFact = 1;
    for(int i = 1; i <= iNo; i++)
        iFact = iFact * i;

    return iFact;
}

int calculateFactOfNumber(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + calculateFactorial(iDigit);
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkStrong(int iNo)
{
    int iFact = 0;
    bool bRet = false;
    
    iFact = calculateFactOfNumber(iNo);

    if(iFact == iNo)
        bRet = true;

    return bRet;
}
int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bool bRet = false;

    bRet = checkStrong(iNo);

    if(bRet == true)
        printf("%d is strong number\n",iNo);
    else
        printf("%d is not strong number\n",iNo);

    return 0;
}