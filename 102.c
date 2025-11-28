#include<stdio.h>

#include<stdbool.h>


bool CheckEvenOdd()
{
    int iNo1 = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo1);

    if(iNo1 % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void main()
{
    bool bRet = false;

    bRet = CheckEvenOdd();

    if(bRet == true)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}


/*

    fun();

    void fun()
    {
    }

    void fun();
*/