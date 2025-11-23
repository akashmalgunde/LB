#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iTemp = iNo;
    bool bRet = false;
    int iDigit = 0;
    int iRet = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRet = iRet * 10 + iDigit;
        iNo = iNo / 10;
    }

    if(iRet == iTemp)
    {
        bRet = true;
    }

    return bRet;
    
}

int main()
{
    int iNo = 0;
    bool bRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = CheckPalindrome(iNo);

    if(bRet == true)
    {
        printf("%d is palindrome\n",iNo);
    }
    else
    {
        printf("%d is not palindrome\n",iNo);
    }

    return 0;
}