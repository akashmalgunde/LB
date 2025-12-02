#include<stdio.h>

void Display(int iN)
{
    for(int i = 1; i <= iN; i++)
    {
        for(int j = 1; j <= iN; j++)
        {
            if(j == 2)
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

    for(int i = 1; i <= iN; i++)
    {
        for(int j = 1; j <= iN; j++)
        {
            if(i == 1 || j == 1 || i == iN || j == iN)
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
    int iNo = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}

/*

            *
            *
            * 
        *   *   *
        *       *
        *   *   *


        iNo     0       3

        iN      3

        i       1       2       3       4

        j       1       2       3       4

                *   
                *   
                *   



        for(int i = 1; i <= iN; i++)
    {
        for(int j = 1; j <= iN; j++)
        {
            if(j == 2)
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



        cmd prompt
        Enter the number:3



*/