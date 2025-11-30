#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibility()
{
    int iNo = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    if(iNo % 3 == 0 && iNo % 5 == 0)
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

    bool bRet = false;

    bRet = CheckDivisibility();

    if(bRet == true)
    {
        printf("Number is divisible by 3 and 5\n");
    }
    else 
    {
        printf("Number is not divisible by 3 and 5\n");
    }

    return 0;
}


/*

    bRet    false   true    false

    iNo     0       15      12


    cmd prompt
    Enter the number:15
    Number is divisible by 3 and 5

    Enter the number:12
    Number is not divisible by 3 and 5






    int iNo = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }



*/