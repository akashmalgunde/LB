#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iValue)
{
    int n = iValue;
    int iDigit = 0;
    int iSum = 0;
    int iOrig = n;

    while(n != 0)
    {
        iDigit = n % 10;
        iSum = iSum + iDigit * iDigit * iDigit;
        n = n /10;
    }

    if(iSum == iOrig)
    {
        return true;
    }
    else
    {
        return false;
    }
}



int main()
{

    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iNo);

    bRet = CheckArmstrong(iNo);

    if(bRet == true)
    {
        printf("%d is armstrong number\n",iNo);
    }
    else
    {
        printf("%d is not armstrong number\n",iNo);
    }


    

    return 0;
}