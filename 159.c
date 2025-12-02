#include<stdio.h>

void Display(int iRows)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iRows; j++)
        {
            if(i == 1 || j == 1 || j == iRows || i == iRows)
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

    iRows   0       5


    iRows   5

    i       0       1       2       3       4       5       6


    j       0       1       2       3       4       5       6

    *       *       *       *       *

    *                               *

    *                               *  

    *                               *   
    
    *       *       *       *       *       






    int i = 0;
    int j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iRows; j++)
        {
            if(i == 1 || j == 1 || j == iRows || i == iRows)
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



    Enter the number of rows:5




*/