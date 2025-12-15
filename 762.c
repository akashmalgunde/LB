#include<stdio.h>

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

int main()
{
    int iRows = 0;

    int Arr[5] = {1,5,6,7,8};

    displayArr(Arr,5);


    return 0;
}