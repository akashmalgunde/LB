#include<stdio.h>

void CheckArmstrong()
{
    int n = 15;
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
        printf("%d is an armstrong number\n",iOrig);
    }
    else
    {
        printf("%d is not an armstrong number\n",iOrig);
    }
}

int main()
{
    
    CheckArmstrong();

    return 0;
}

/*

    int n = 15;
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
        printf("%d is an armstrong number\n",iOrig);
    }
    else
    {
        printf("%d is not an armstrong number\n",iOrig);
    }

    n   15  1   0
    iDigit  0   5   1
    iSum    0   125 126
    iOrig   15

    Cmd Prrompt
    15 is not an armstrong number.


*/