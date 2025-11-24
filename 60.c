#include<stdio.h>

void CheckEligibility()
{
    int iAge = 19;

    if(iAge >= 18)
    {
        printf("You are eligible for voting.\n");
    }
    else
    {
        printf("You are not eligible for voting.\n");
    }

}

int main()
{
    CheckEligibility();
    
    return 0;
}