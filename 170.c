#include<stdio.h>

int main()
{
    int Arr[5];

    printf("Enter the number:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Entered numbers are:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",Arr[i]);
    }

    return 0;
}


/*
            0       1       2       3       4
    Arr     10      20      30      40      50 
    
    i       0       1       2       3       4       5


    i       0       1       2       3       4       5


    cmd prompt 
    Enter the number:
    10
    20
    30  
    40
    50

    Entered numbers are:
    10
    20
    30
    40
    50





*/