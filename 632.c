#include<stdio.h>

void displayEven(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
            printf("%d\t",Arr[i]);
    }
}

void displayOdd(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
            printf("%d\t",Arr[i]);
    }
}

void displayEvenDigit(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        int iNo = Arr[i];
        printf("%d ",iNo);
        while(iNo != 0)
        {
            if((iNo % 10) % 2 == 0)
            {
                printf("%d ",(iNo % 10));
            }

            iNo = iNo / 10;
        }
        printf("\n");
    }
}

void displayOddDigit(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {

        int iNo = Arr[i];
        printf("%d : ",iNo);
        while(iNo != 0)
        {
            if((iNo % 10) % 2 != 0)
            {
                printf("%d ",(iNo % 10));
            }

            iNo = iNo / 10;
        }
        printf("\n");
    }
}

int main()
{
    int Arr[5] = {10,203,303,405,50};

    printf("Even fun : ");
    displayEven(Arr,5);
    printf("\n");

    printf("Odd fun: ");
    displayOdd(Arr,5);
    printf("\n");

    printf("Calling Even digit fun\n");
    displayEvenDigit(Arr,5);
    printf("\n");

    printf("Calling Odd digit fun\n");
    displayOddDigit(Arr,5);
    printf("%c",10);
    printf("%c",10);

    printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("%c",10);
printf("Hello\n");

    return 0;
}