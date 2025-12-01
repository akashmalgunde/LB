#include<stdio.h>

void Display(int iRows,int iColumns)
{
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
    int iColumns = 0;

    printf("Enter the no of coluns:\n");
    scanf("%d",&iRows);

    printf("Enter the no of columns:\n");
    scanf("%d",&iColumns);

    Display(iRows,iColumns);

    return 0;
}