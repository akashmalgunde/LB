#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iColumns; j++)
        {
            if(i == 1 || i == iRows || j == 1 || j == iColumns)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iNo1);

    printf("Enter the number of columns\n");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}




/*
j1  2   3   4   5
*   *   *   *   *i1
*               *2
*               *3
*               *4
*   *   *   *   *5

Algorithm

Start 
    Accept rows and columns from user as iNo1,iNo2

    take 2 loops one for the rows and other for the columns

    if i== 1 || i == iRows || j == 1 || j == iColiums
        print star
Stop



iNo1    0   3
iNo2    0   3

iRows   3
iColums 3

i   0   1   2   3   4
j   0   1   2   3   4


Cmd Prompt
*   *   *
*       *
*   *   *

for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iColumns; j++)
        {
            if(i == 1 || i == iRows || j == 1 || j == iColumns)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
*/