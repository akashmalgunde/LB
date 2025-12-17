#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == iRows-1 && j != iRows-1 || i == 1 && j == iRows-1 || i == iRows && j == iRows-1)
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

    printf("Enter the no of rows:");

    scanf("%d",&iRows);

    Display(iRows);



    return 0;
}