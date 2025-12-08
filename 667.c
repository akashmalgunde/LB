#include<stdio.h>
#define bool int
#define true 1
#define false 0

bool CalculateSum(int iNo)
{
    int iTemp = iNo;
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt = iCnt * 10 + iDigit;
        iNo = iNo / 10;
    }

    if(iTemp == iCnt)
        return true;
    
    else 
        return false;

}

int main()
{
    int iNo = 0;
    bool bRet = 0;

    printf("Enter the no:\n");
    scanf("%d",&iNo);

    bRet = CalculateSum(iNo);

    if(bRet == true)
        printf("Palindrome\n");
    
    else 
        printf("Not Palindrome\n");

    return 0;
}