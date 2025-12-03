#include<stdio.h>

int main()
{
    int Arr[5];

    printf("Enter the number:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",Arr[i]);
    }

    int iSum = 0;

    for(int i = 0; i < 5; i++)
    {
        iSum = iSum + Arr[i];
        
    }

    printf("Sum is : %d\n",iSum);

    printf("Average is :%d\n",iSum / 5);

    return 0;
}