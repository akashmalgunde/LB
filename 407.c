#include<stdio.h>

void Display(int iRows)
{
    int iMid1 = iRows;
    int iMid2 = iRows;
    int iCnt = 1;
    for(int i = 1; i <= iRows; i++,iMid1--,iMid2++)
    {
        for(int j = 1; j < iRows*2; j++)
        {
            if(j >= iMid1 && j <= iMid2)
            {
                printf("%d ",iCnt*2);
                iCnt++;
            }
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
