#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % 2 != 0)
            {
                if(j % 2 != 0)
                    printf("1 ");
                else
                    printf("0 ");
            }
            else
            {
                if(j % 2 != 0)
                    printf("0 ");
                else
                    printf("1 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the no of rors:");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}