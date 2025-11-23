#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iTemp = iNo;
    int iDigit = 0;
    int iNo1 = 0;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iNo1 = iNo1* 10 + iDigit;
        iTemp = iTemp / 10;
    }

    return iNo == iNo1 ? true : false;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);


    bRet = CheckPalindrome(iNo);

    if(bRet == true)
    {
        printf("Enteed no is palindrome\n");
    }
    else
    {
        printf("Entered no is not palindrome\n");
    }

    return 0;
}