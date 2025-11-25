#include<stdio.h>

void Display(int iRows)
{
     int iCnt1= iRows;
    int iCnt2 = iRows;
    for(int i = 1; i <= iRows; i++,iCnt1--,iCnt2++)
    {
        for(int j = 1; j < iRows *2 ; j++)
        {
            if(j <= iCnt2 && j >= iCnt1)
                printf("%d ",i);
            else 
                printf("  ");
        }

        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter no of roes:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}