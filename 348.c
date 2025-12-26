#include<stdio.h>

void Display(int iRows)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    for(int i = 1,iCnt1 = iRows,iCnt2 = iRows; i <= iRows; i++,iCnt1--,iCnt2++)
    {
        for(int j = 1; j < iRows * 2; j++)
        {
            if(i == 1 && j == 3 || i == 2 && j % 2 == 0 || (i == 3 && (j == 1 || j == iRows * 2 - 1) ))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j < iRows*2; j++)
        {
            if(j == 1 || j == iRows *2 - 1 || i == iRows )
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

    printf("Enter the rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}