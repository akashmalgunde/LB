#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibility(int iValue)
{
   return  iValue % 3 == 0 && iValue % 5 == 0 ?   true : false;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);


    bRet = CheckDivisibility(iNo);

    //printf("%d",bRet);

    if(bRet == true)
    {
        printf("%d is completely divisible by 3 and 5\n",iNo);
    }
    else
    {
        printf("%d is not completely divisible by 3 and 5\n",iNo);
    }

    return 0;
}