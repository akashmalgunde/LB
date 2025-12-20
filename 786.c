#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i % 2 != 0)
            {
                if(j % 2 != 0)
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if(j % 2 != 0)
                    printf("  ");
                else
                    printf("* ");
            }
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