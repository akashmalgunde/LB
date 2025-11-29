#include<stdio.h>

void CheckDiscount(char cStud,int iPrice)
{
    if(cStud == 'y' && iPrice > 500)
    {
        printf("You will get 20 percent discount\n");
    }
    else if(cStud == 'y' && iPrice < 500)
    {
        printf("You are not eligible for getting discount\n");
    }
    else if(cStud == 'n' && iPrice < 600)
    {
        printf("You are not eligible for getting discount\n");
    }
    else
    {
        printf("You will get 15 percent discount\n");
    }
}

int main()
{
    char cStud = '\0';
    int iPur = 0;

    printf("Are you a student:");
    scanf("%c",&cStud);

    printf("Enter your purchase value:");
    scanf("%d",&iPur);
    
    CheckDiscount(cStud,iPur);

    return 0;
}