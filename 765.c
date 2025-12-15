#include<stdio.h>
#include<stdlib.h>

void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j < iRows * 2; j++)
            if(i == j || i + j == iRows *2 || j == 1 || j == iRows * 2 -1 || i == iRows)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }

    int iCnt = iRows + 2;
    for(int i = 1; i < iRows; i++,iCnt += 2)
    {
        for(int j = 1; j < iRows * 2; j++)
            if(j == 1 || j == iRows *2 - 1 || j + i == iRows || i + j == iCnt)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }
}

void displayArr(int iRows)
{
    while(iRows != 0)
    {
        Display(iRows % 10);
        iRows = iRows / 10;
        printf("\n");
    }
}

void Accept(int *Arr)
{
    printf("Enter the no:\n");
    scanf("%d",*Arr);
    

    printf("\n");

}

void Displayentered(int *Arr)
{
    printf("Entered element is:\n");
    printf("%d\n",*Arr);
    
    printf("\n");
}

int main()
{
    int iRows = 284455;

    //Accept(&iRows);

    //Displayentered(&iRows);

    displayArr(iRows);


    return 0;
}