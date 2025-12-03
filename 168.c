#include<stdio.h>

int main()
{
    int Arr[5];

    printf("Enter the numbers:\n");

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