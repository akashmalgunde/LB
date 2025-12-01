#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iValue)
{
    int iReverse = 0;
    int iTemp = iValue;
    int iDigit = 0;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;

        // 52

        //  0   =   0   * 10    + 2;
        //25
        iReverse = iReverse * 10 + iDigit;
        iTemp = iTemp / 10;
    }

    if(iReverse == iValue)
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

    bRet = CheckPalindrome(iNo);

    if(bRet == true)
    {
        printf("%d is palindrome\n",iNo);
    }
    else
    {
        printf("%d is not palindrome\n",iNo);
    }


}



/*

    iNo     0       25
    bRet    false   false


    iValue      25
    iReverse    0       5       52
    iTemp       25      2       0
    iDigit      0       5       2






    int iReverse = 0;
    int iTemp = iValue;
    int iDigit = 0;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;

        // 52

        //  0   =   0   * 10    + 2;
        //25
        iReverse = iReverse * 10 + iDigit;
        iTemp = iTemp / 10;
    }

    if(iReverse == iValue)
    {
        return true;
    }
    else
    {
        return false;
    }


    

    cmd prompt

    Enter the number:25
    25 is not p
    alindrome


*/