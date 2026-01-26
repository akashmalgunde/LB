#include<stdio.h>

void display(int iRows)
{
    if(iRows < 0)
    {
        printf("Enter the valid count it should be never negative\n");
        return;
    }
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for(int i = iRows - 1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("enter the no of rows:\n");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}