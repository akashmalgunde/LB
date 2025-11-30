
#include<stdio.h>

void CheckPhase(int iAge)
{
    if(iAge < 12)
    {
        printf("You are a child\n");
    }
    else if(iAge >= 12 && iAge <= 19)
    {
        printf("You are a teenager\n");
    }
    else if (iAge >= 20 && iAge <= 59)
    {
        printf("You are a adult\n");
    }
    else if(iAge >= 60)
    {
        printf("You are a senior\n");
    }
    
}


int main()
{
    int iAge = 0;

    printf("Enter your age:");
    scanf("%d",&iAge);

    CheckPhase(iAge);

    return 0;
}


/*

    iAge    0   25


    iAge    25

    if(iAge < 12)
    {
        printf("You are a child\n");
    }
    else if(iAge >= 12 && iAge <= 19)
    {
        printf("You are a teenager\n");
    }
    else if (iAge >= 20 && iAge <= 59)
    {
        printf("You are a adulit\n");
    }
    else if(iAge >= 60)
    {
        printf("You are a senior\n");
    }


    Cmd Prompt
    Enter your age:25

    You are a adult

*/