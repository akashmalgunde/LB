#include<stdio.h>

#include<stdbool.h>

bool CheckGreater()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter first number:");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);

    if(iNo1 > iNo2)
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

    bRet = CheckGreater();

    if(bRet == true)
    {
        printf("First number is greater\n");
    }
    else
    {
        printf("Second number is greater\n");
    }
    
    return 0;
}


/*
    bRet    false false
    iNo1    0   5
    iNo2    0   6



    Cmd Prompt
    Enter first number:5

    Enter second number:
    6

    Second number is greater





    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter first number:");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);

    if(iNo1 > iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }




*/
    
    
