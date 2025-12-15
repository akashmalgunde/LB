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

void displayArr(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        Display(Arr[i]);

        printf("\n");
        printf("\n");
    }
}

void Accept(int *Arr,int iSize)
{
    printf("Enter the elements:\n");
    for(int i = 0; i < iSize; i++)
        scanf("%d",&Arr[i]);

    printf("\n");

}

void Displayentered(int *Arr,int iSize)
{
    printf("Entered elements are:\n");
    for(int i = 0; i < iSize; i++)
        printf("%d\t",Arr[i]);
    
    printf("\n");
}

int main()
{
    int iRows = 0;

    int *Arr = (int*)malloc(sizeof(int) * 5);

    Accept(Arr,5);

    Displayentered(Arr,5);

    displayArr(Arr,5);


    return 0;
}