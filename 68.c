#include<stdio.h>

void CheckDivisibility()
{
    int iNo1 = 20;

    if(iNo1 % 3 == 0 && iNo1 %5 == 0)
    {
        printf("%d is divisible by 3 and 5\n",iNo1);
    }
    else if(iNo1 %3 != 0 && iNo1 %5 != 0)
    {
        printf("%d is not divisible by 3 and 5\n",iNo1);

    }
    else if(iNo1 % 3 == 0)
    {
        if(iNo1 % 5 != 0)
        {
            printf("%d is divisible by 3 but not by 5\n",iNo1);
        }
    }
    else
    {
        printf("%d is divisible by 5 but not by 3\n",iNo1);
    }
}

int main()
{

    
    CheckDivisibility();

    return 0;
}


/*

    int iNo1 = 20;

    if(iNo1 % 3 == 0 && iNo1 %5 == 0)
    {
        printf("%d is divisible by 3 and 5\n",iNo1);
    }
    else if(iNo1 %3 != 0 && iNo1 %5 != 0)
    {
        printf("%d is not divisible by 3 and 5\n",iNo1);

    }
    else if(iNo1 % 3 == 0)
    {
        if(iNo1 % 5 != 0)
        {
            printf("%d is divisible by 3 but not by 5\n",iNo1);
        }
    }
    else
    {
        printf("%d is divisible by 5 but not by 3\n",iNo1);
    }

    iNo1    20

    Cmd Prompt
    20 is divisible by 5 but not by 3.


*/