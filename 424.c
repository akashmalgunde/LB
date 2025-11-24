#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 1;
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",iCnt++);
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