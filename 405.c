#include<stdio.h>

void Display(int iRows)
{
    int iMid1 = iRows;
    int iMid2 = iRows;
    for(int i = 1; i <= iRows; i++,iMid1--,iMid2++)
    {
        for(int j = 1; j < iRows*2; j++)
        {
            if(j == iMid1 || j == iMid2)
                printf("* ");

            else
                printf("  ");
        }
        printf("\n");
    }
    //printf("%d %d\n",iMid1,iMid2);
        iMid1 = iMid1 + 2;
        iMid2 = iMid2 - 2;
    for(int i = 1; i < iRows; i++,iMid1++,iMid2--)
    {
        for(int j = 1; j < iRows*2; j++)
        {
            if(j == iMid1 || j == iMid2)
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

    printf("Enter the number of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}