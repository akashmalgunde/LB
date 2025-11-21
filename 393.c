#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(j <= i)
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

    printf("Enter number of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}