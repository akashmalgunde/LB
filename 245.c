#include<stdio.h>

void Display(int iRows)
{
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
        for(int k = 2; k <= iRows; k++)
        {
            if(k <= i)
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
}

int main()
{
    Display(5);

    return 0;
}