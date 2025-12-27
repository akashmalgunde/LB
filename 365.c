#include<stdio.h>

void Display(int iRows)
{
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

    for(int i = 1; i <= iRows+1; i++)
    {
        for(int j = 1; j <= iRows*2 ; j++)
        {
            if(((j == iRows/2+1) && (i <= iRows))|| (i == iRows && j >= iRows / 2 + 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for(int j = 1; j <= (iRows / 2 + 1); j++)
        {   
            if(i > iRows / 2 + 1 && (j != 2 || i != iRows))
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

    printf("Enter the number of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}