#include<stdio.h>
#include<stdbool.h>

bool CheckLeap()
{
    int iYear = 0;


    printf("Enter the Year that you want to check weather it is leap or not:\n");
    scanf("%d",&iYear);

    if(iYear < 0)
    {
        iYear = -iYear;
    }

    if(iYear % 4 == 0)
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

    bRet = CheckLeap();

    if(bRet == true)
    {
        printf("This year is leap year\n");
    }
    else
    {
        printf("This year is not a leap year\n");
    }

}