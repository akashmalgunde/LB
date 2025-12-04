#include<stdio.h>


void Display(int iRows)
{
    int iCnt1 = 1;
    int iCnt2 = iRows*2 - 1;
    for(int i = 1; i <= iRows; i++,iCnt1++,iCnt2--)
    {
        for(int j = 1; j < iRows *2; j++)
        {
            if(j >= iCnt1 && j <= iCnt2)
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