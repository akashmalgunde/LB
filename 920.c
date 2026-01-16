#include<stdio.h>

void display(int iRows)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(int i = 1; i <= iRows; i++)
    {
        iCnt = i;
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",iCnt--);
        }

        printf("\n");
    }

}

int main()
{
    int iRows = 0;

    printf("Enter the number of rows:");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}