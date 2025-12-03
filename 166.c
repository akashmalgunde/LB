#include<stdio.h>

void Display()
{
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            if(j == 31 || j == 32)
            {
                printf("0");
            }
            else if(i == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    }



    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            if(j >= 21 && j <= 41)
            {
                if(j % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
    printf("\n");
    printf("\t");
    printf("\t");
    printf("\t");        printf("\t");
        printf("\t");
        printf("\t");
        printf("\t");
        printf("\t");
        printf("\t");
        printf("\t");
        printf("\t");
        printf("\t");    
    }

    int iStart = 19;
    int iEnd = 43;

    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            if(j == iStart || j == iEnd)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        iStart = iStart - 2;
        iEnd = iEnd + 2;
        printf("\n");
        printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    }

    for(int i = 1; i <= 7; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            if(j == 1)
            {
                printf("*");
            }
            else if(j == 60)
            {
                printf("-");
            }
            else if(i == 1 || i == 7)
            {
                if(j % 2 == 0)
                {
                    printf("-");
                }
                else
                {
                    printf("^");
                }
            }

            else if(i == 2 && j == 25)
            {
                printf("W");
            }
            else if(i == 2 && j == 26)
            {
                printf("i");
            }
            else if(i == 2 && j == 27)
            {
                printf("s");
            }
             else if(i == 2 && j == 28)
            {
                printf("h");
            }
             else if(i == 2 && (j == 28 || j == 29))
            {
                printf(" ");
            }
             else if(i == 2 && j == 30)
            {
                printf("Y");
            }
            else if(i == 2 && j == 31)
            {
                printf("o");
            }
            else if(i == 2 && j == 32)
            {
                printf("u");
            }
            else if(i == 2 && (j == 32 || j == 33))
            {
                printf(" ");
            }
            else if(i == 3 && j == 23)
            {
                printf("H");
            }
            else if(i == 3 && j == 24)
            {
                printf("a");
            }
            else if(i == 3 && j == 25)
            {
                printf("p");
            }
            else if(i == 3 && j == 26)
            {
                printf("p");
            }
            else if(i == 3 && j == 27)
            {
                printf("y");
            }

            else if(i == 3 && (j == 28 || j == 29))
            {
                printf(" ");
            }

            else if(i == 3 && j == 30)
            {
                printf("D");
            }
            else if(i == 3 && j == 31)
            {
                printf("i");
            }
            else if(i == 3 && j == 32)
            {
                printf("w");
            }
            else if(i == 3 && j == 33)
            {
                printf("a");
            }
            else if(i == 3 && j == 34)
            {
                printf("l");
            }
            else if(i == 3 && j == 35)
            {
                printf("i");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
        printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    }

    int iFirst = 1;
    int iLast = 60;

    for(int i = 1; i <= 9; i++)
    {
        
        for(int j = 1; j <= 60; j++)
        {
            if(j == iFirst || j == iLast)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        iFirst = iFirst + 2;
        iLast = iLast - 2;
        printf("\n");
        printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    }

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            if(j >= 19 && j <= 41)
            {
                if(j % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    }

    int iCnt = 0;

    for(int i = 1; i <= 7; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            if(j == 22 || j == 26 || j == 30 || j == 34 || j == 38)
            {
               printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        printf("\n");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    }

    
    

    for(int i = 1; i <= 2; i++)
    {
        printf("\t");
    }
    printf("    ");
    printf("Stay Happy! Stay Safe");
}


int main()
{

    Display();

    return 0;
}