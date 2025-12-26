#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 1;
    for(int i = 1; i <= iRows; i++,iCnt+=2)
    {
        for(int j = 1; j <= iRows + 2; j++)
        {
            if(j == iCnt || i == 1 && j <= i || i == iRows || j == 1)
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

    printf("Enter the count of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}