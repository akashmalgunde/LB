#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 1;
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
            printf("%d ",iCnt++);
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the number:");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}