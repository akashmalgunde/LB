#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == 1 || i == iRows || i + j == iRows + 1 || i == j)
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

    printf("Enter the number of rows:");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}


/*

    iRows   0   3

    cmd prompt
    Enter the number of rows: 3


    *   *   *
        *     
    *   *   *
    

    iRows   3

    i   1   2   3   4
    
    j   1   2   3   4



    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == 1 || i == iRows || i + j == iRows + 1)
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

*/