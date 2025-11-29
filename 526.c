#include<stdio.h>

void Display(int iRows,int iColumns)
{
    //char Arr[] = {'*','#'};

    if(iRows != iColumns)
    {
        printf("Invalid Input\n");
        return;
    }
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iColumns; j++)
        {
            if(i == j)
                printf("# ");
            else
                printf("$ ");
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