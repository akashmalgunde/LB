#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
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

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = CheckDivisibility(iNo);

    if(bRet == true)
    {
        printf("%d is Divisible by 3 and 5\n",iNo);
    }
    else
    {
        printf("%d is not Divisible by 3 and 5\n",iNo);
    }

    return 0;
}