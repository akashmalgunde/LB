#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == 1 || i == iRows || i == j || j + i == iRows + 1)
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

    printf("Enter no of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}