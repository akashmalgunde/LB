#include<stdio.h>

void CheckPalindrome()
{
    int iDigit = 0;
    int iNum = 121;
    int iRev = 0;
    int iOrig = iNum;

    while(iNum != 0)
    {
        iDigit = iNum % 10;
        iRev = iRev * 10 + iDigit;
        iNum = iNum /10;
    }

    //printf("Rev is %d",iRev);

    if(iRev == iOrig)
    {
        printf("%d is a palindrome number\n",iOrig);
    }
    else
    {
        printf("%d is not a palindrome number\n",iOrig);
    }
}

int main()
{
    CheckPalindrome();

    return 0;
}