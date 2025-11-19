#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= (iRows / 2) + 1; i++)
    {

        for(int j = 1; j <= iRows; j++)
        {
            printf("* ");
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