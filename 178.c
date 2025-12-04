#include<stdio.h>

void Display(int iRows)
{
    printf("\t");
    for(int i = 1; i <= 2; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            if(j == 3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        printf("\t");
    }

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 6; j++)
        {
            if(i + j == 4 || j == 4 && i == 2 || i == 3 && j == 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        printf("\t");
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


/*
            *

            *

   1   2   3   4  5  6 *
1           * *
2       *       *
3   *               *
*/