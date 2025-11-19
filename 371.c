#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1,l = 1,m = iRows; i <= (iRows / 2) + 1; i++,l++,m--)
    {

        for(int j = 1; j <= iRows; j++)
        {
            if(l <= j && m >= j)
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

    printf("Enter the no of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}