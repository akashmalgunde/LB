#include<stdio.h>
void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == 1 || j == 1 || i == iRows || j == iRows)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for(int j = 1; j < iRows*2; j++)
        {
            if(i == 1 || j == iRows*2 - 1 || i == 5)
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

    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if (i == 1)
            {
                printf("+ ");
            }
            else if(j == iRows || i == j)
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

void Accept(int *Arr,int iSize)
{
    printf("Enter the elements:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void DisplayArray(int *Arr,int iSize)
{
    printf("Entered elements of an array is : \n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

void PerformOpn(int * Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("for %d\n",Arr[i]);
        Display(Arr[i]);
    }
}

int main()
{
    int iSize = 0;

    printf("Enter the size:\n");
    scanf("%d",&iSize);

    int Arr[iSize];

    Accept(Arr,iSize);

    DisplayArray(Arr,iSize);

    PerformOpn(Arr,iSize);

    return 0;
}