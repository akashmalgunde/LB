#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 0;
    for(int i = 1; i <= iRows; i++)
    {
        iCnt = i + 1;
        for(int j = 1; j <= iRows; j++)
            if(i == 1 || i == iRows || j == 1 || j == iRows)
                printf("*    ");
            else
                printf("%d    ",iCnt++);
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