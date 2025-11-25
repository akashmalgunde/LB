#include<stdio.h>

void Display(int iRows)
{
    int iCnt1= iRows;
    int iCnt2 = iRows;
    for(int i = 1; i <= iRows; i++,iCnt1--,iCnt2++)
    {
        for(int j = 1; j < iRows *2 ; j++)
        {
            if(j == iCnt2 || j == iCnt1)
                printf("* ");
            else 
                printf("  ");
        }

        printf("\n");
    }
    iCnt1 = iCnt1 + 2;
    iCnt2 = iCnt2 - 2;
    for(int i = 1; i < iRows; i++,iCnt1++,iCnt2--)
    {
        for(int j = 1; j < iRows*2-1; j++)
        {
            if(j == iCnt1 || j == iCnt2)
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