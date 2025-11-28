#include<stdio.h>
#include<stdbool.h>


bool CheckEligibility()
{

    int iAge = 0;

    printf("Enter Your age : \n");
    scanf("%d",&iAge);

    if(iAge < 0)
    {
        iAge = -iAge;
    }

    if(iAge >= 18)
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

    bRet = CheckEligibility();

    if(bRet == true)
    {
        printf("You are Eligible for voting\n");
    }
    else
    {
        printf("You are not Eligible for voting\n");
    }

    return 0;
}