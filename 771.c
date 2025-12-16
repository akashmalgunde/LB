#include<stdio.h>

void Display(int iRows)
{
    int iCnt1 = 1;
    int iCnt2 = iRows * 2 - 1;
    int iPrint = 0;

    for(int i = 1; i <= iRows; i++,iCnt1++,iCnt2--)
    {
        for(int j = 1,iPrint = iRows - 1; j < iRows*2; j++)
            if(j >= iCnt1 && j <= iCnt2)
            {
                if(j > iRows)
                    printf("%d ",iPrint--);
                else
                    printf("%d ",j);

            }
            else
                printf("  ");
        printf("\n");
    }

    //printf("%d -> iCnt1 and %d -> iCnt2\n",iCnt1,iCnt2);
    iCnt1 -=  2;
    iCnt2 += 2;
    for(int i = 1; i < iRows; i++,iCnt1--,iCnt2++)
    {
        for(int j = 1,iPrint = iRows - 1; j < iRows*2; j++)
            if(j >= iCnt1 && j <= iCnt2)
                if(j > iRows)
                    printf("%d ",iPrint--);
                else
                    printf("%d ",j);
            else
                printf("  ");
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