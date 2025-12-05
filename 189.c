#include<stdio.h>

void InsertElement(int Brr[],int iSize)
{
    printf("Enter the elements of an array:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElements(int Brr[],int iSize)
{
    printf("Entered elements of an array:\n");

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
    printf("\n");
}

void DisplayMax(int Brr[],int iSize)
{
    int iMax = 0;

    iMax = Brr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iMax < Brr[i])
        {
            iMax = Brr[i];
        }
    }
    printf("Maximum element in an array is: %d\n",iMax);
}

void DisplayMin(int Brr[],int iSize)
{
    int iMin = 0;

    iMin = Brr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iMin > Brr[i])
        {
            iMin = Brr[i];
        }
    }
    printf("Minimum element in the array is : %d\n",iMin);
}

int main()
{
    int Arr[5];


    InsertElement(Arr,5);

    DisplayElements(Arr,5);

    DisplayMax(Arr,5);

    DisplayMin(Arr,5);

    return 0;
}



/*

void InsertElement(int Brr[],int iSize)
{
    printf("Enter the elements of an array:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElements(int Brr[],int iSize)
{
    printf("Entered elements of an array:\n");

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
}

            100 104 104 108 108 112 112 116 116 120
                0       1       2       3       4
    Arr         10      20      30      40      50


    Brr         100

    iSize       5


    i           0       1       2       3       4       5

    cmd prompt

    Enter the elements of an array:
    10
    20
    30
    40
    50
    Entered elements of an array are:
    10  20  30  40   50   








*/