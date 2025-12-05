#include<stdio.h>

void Display(int iRows)
{
    for(int i = iRows; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
            printf("* ");
        
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the no of roes:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}