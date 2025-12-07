#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 0;
    for(int i = iRows; i >= 1; i--)
    {
        iCnt = i + 1;
        for(int j = 1; j <= iRows; j++)
            if((i + 1)% 2 == 0)
                printf("%d ",iCnt);
            else
                printf("%d ",j);
           
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the the no of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}