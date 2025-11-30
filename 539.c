#include<stdio.h>

void Display(int iRows,int iColumns)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iColumns; j++)
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
    int iColumn = 0;

    printf("Enter the no of rows:\n");
    scanf("%d",&iRows);

    printf("Enter the no of columns:\n");
    scanf("%d",&iColumn);

    Display(iRows,iColumn);

    return 0;
}