#include<stdio.h>

void display(int iRows)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    iCnt1 = iCnt2 = iRows;
    for(int i = 1; i < iRows*2; i++,iCnt1--,iCnt2++)
    {
        for(int j = 1; j < iRows * 2; j++)
        {
            if(j == iCnt1 || j == iCnt2 || i == iRows)
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

    display(iRows);

    return 0;
}