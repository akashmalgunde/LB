#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(j >= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        for(int j = iRows; j >= 2; j--)
        {
            if(j >= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = iRows; j >= 1; j--)
        {
            if(i >= j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for(int k = 2; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    Display(5);

    return 0;
}