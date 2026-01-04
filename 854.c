#include<stdio.h>
#include<stdbool.h>

bool checkPositive(int iNo)
{
    bool bRet = false;

    if(iNo >= 0)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;
     
    printf("Enter the number:");
    scanf("%d",&iNo);

    bRet = checkPositive(iNo);

    if(bRet == true)
        printf("%d is positive number\n",iNo);
    else
        printf("%d is negative number\n",iNo);

    return 0;
}