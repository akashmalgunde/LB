#include<stdio.h>

void Display(int iRows,int iColumns)
{
    //char Arr[] = {'*','#'};
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iColumns; j++)
        {
            if(i % 2 == 0)
                printf("* ");
            else
                printf("%d ",i);
        }
        printf("\n");
        //ch = 'A';
        //ch++;
    }
}

int main()
{
    int iRows = 0;
    int iColumn = 0;

    printf("Enter the no of rows:\n");
    scanf("%d",&iRows);

    printf("Enter the no of columns:\n");
    scanf("%d",&iColumn);

    Display(iRows,iColumn);

    return 0;
}