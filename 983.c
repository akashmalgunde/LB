#include<stdio.h>
#define bool int
#define true 1
#define false 0

int reverseNumber(int iNo)
{
    int iDigit = 0;
    int iRet = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRet = iRet * 10 + iDigit;
        iNo = iNo / 10;
    }

    return iRet;
}

bool checkPalindrome(int iNo)
{
    bool bRet = false;
    int iRev = 0;

    iRev = reverseNumber(iNo);

    if(iNo == iRev)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the numner:\n");
    scanf("%d",&iNo);

    if(checkPalindrome(iNo))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}