#include<stdio.h>

void Display(int iRows)
{
    for(int j = 1; j <= iRows; j++)
    {
        if(j == 2 || j == 3)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == 1 || i == iRows || j == 1 || j == iRows)
                printf("* ");
            
            else
                printf("  ");
        }

        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the no of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}