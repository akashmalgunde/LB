#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
            printf("* ");
        
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the rows:\n");
    scanf("%d",&iRows);

    Display(iRows);


    return 0;
}