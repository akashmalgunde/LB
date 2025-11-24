#include<stdio.h>

void Display(int iRows)
{
    int iCnt = iRows;
    for(int i = 1; i <= iRows; i++,iCnt--)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(j <= i)
                printf("* ");
            
                else
                    printf("  ");
        }

        for(int k = 1; k <= iRows; k++)
        {
            if(k >= iCnt)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    int iCnt2 = iRows;
    for(int i = 1; i <= iRows; i++,iCnt2--)
    {
        for(int j = 1; j <= iRows; j++)
        {   
            if(j <= iCnt2)
                printf("* ");
            else
                printf("  ");

        }

        for(int k = 1; k <= iRows; k++)
        {
            if(k >= i)
                printf("* ");
            
            else
                printf("  ");
        }

        printf("\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}