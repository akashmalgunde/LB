#include<stdio.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
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