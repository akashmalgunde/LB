#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j < iRows * 2; j++)
            if(i == j || i + j == iRows *2 || j == 1 || j == iRows * 2 -1 || i == iRows)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }

    int iCnt = iRows + 2;
    for(int i = 1; i < iRows; i++,iCnt += 2)
    {
        for(int j = 1; j < iRows * 2; j++)
            if(j == 1 || j == iRows *2 - 1 || j + i == iRows || i + j == iCnt)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the no:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}