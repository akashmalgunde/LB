#include<stdio.h>
#include<stdlib.h>

void Display(int iRows)
{
    int iCnt = 0;
    for(int i = 1; i <= iRows; i++)
    {
        iCnt = i + 1;
        for(int j = 1; j <= iRows; j++)
            if(i == j)
                printf("# ");
            else if(j <= i)
                printf("* ");
            else
                printf("$ ");
        printf("\n");
    }
}

void DisplayPatt(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        Display(Arr[i]);
        printf("\n");
    }
}

void AcceptArr(int *Arr,int iSize)
{
    printf("Enter the elements:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d -> ",i);
        scanf("%d\t",&Arr[i]);
    }
    //printf("\n");
}

void DisplayArr(int *Arr,int iSize)
{
    printf("Entered elements are:\n");
    for(int i = 0; i < iSize; i++)
        printf("%d -> %d\t",i,Arr[i]);
    printf("\n");
}

int main()
{
    int iSize = 0;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    printf("%d is size enetered by user\n",iSize);

    int *Arr = (int *)malloc(sizeof(int) * iSize);

    AcceptArr(Arr,iSize);

    DisplayArr(Arr,iSize);

    DisplayPatt(Arr,iSize);


    return 0;
}