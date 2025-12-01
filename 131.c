#include<stdio.h>

void Display(int iRows)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iRows; j++)
        {
            if(i == 1 || j == 1)
            {
                printf("*\t");
            }
            else if(i == j)
            {
                printf("o\t");
            }
            else if(i + j == iRows + 1)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter number of rows:");
    scanf("%d",&iRows);

    Display(iRows);


    return 0;
}