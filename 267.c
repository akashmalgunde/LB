#include<stdio.h>

void Display(int iRows)
{
    if(iRows % 2 == 0)
    {
        printf("Note : Can't draw this kind of pattern for your entered no of rows ie %d.\n",iRows);
        return;
    }
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == 1 || j == 1 && i <= (iRows /2) + 1  || i == iRows || j == iRows && i >= (iRows / 2) + 1|| i == 3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


int main()
{
    int iNo = 0;

    printf("Enter the No of rows:\n");
    scanf("%d",&iNo);

    Display(iNo);
}