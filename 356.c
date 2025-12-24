#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if((i == j && (i > 1 && j > 1)) || i == iRows || j == iRows)
                printf("* ");
            
            else
                printf("  ");
        }
         for(int j = 1; j <= iRows; j++)
        {
            if((i == iRows || i == j) && (i > 1 && j > 1) )
                printf("* ");

            else if(j > 1)
                printf("  ");
        }

        printf("\n");
    }

    for(int i = 1; i <= iRows; i++)
    {
        
            if(i > 1)
            {
            for(int j = 1; j <= iRows; j++)
            {
                if((j == iRows || i == j )&& i > 1)
                    printf("* ");
            
                else if(i > 1)
                    printf("  ");
       }
       for(int j = 1; j <= iRows; j++)
       {
            if(i == j && j < iRows)
                printf("* ");
            else if(j > 1 && j < iRows)
                printf("  ");
       }
        printf("\n");}
        
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