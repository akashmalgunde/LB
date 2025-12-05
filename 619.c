#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 0;
    for(int i = 1; i <= iRows; i++)
    {
        iCnt = 1;
        for(int j = 1; j <= i; j++,iCnt++)
            printf("%d ",iCnt);
        
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the no of roes:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}