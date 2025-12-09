#include<stdio.h>

void Display(int iRows)
{
    char arr[] = {'#','*'};
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
            printf("%c ",arr[i % 2]);
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the no of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}