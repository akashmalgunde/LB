#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    for(int i = iRows - 1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}



int main()
{
    int iRows = 0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);
}