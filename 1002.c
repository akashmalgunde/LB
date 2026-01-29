#include<stdio.h>

void display(int iRows)
{
    int iCnt = 0;
    for(int i = 1,iCnt = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++,iCnt++)
        {
            printf("%d ",iCnt);
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