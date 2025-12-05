#include<stdio.h>

int main()
{
    int arr[5];

    int brr[7];

    int crr[10];

    printf("Enter elements for the first array:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter elements for second array:\n");

    for(int i = 0; i < 7; i++)
    {
        scanf("%d",&brr[i]);

    }

    printf("Enter elements for second array:\n");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&crr[i]);
    }


    printf("elements for the first array:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }

    printf("elements for second array:\n");

    for(int i = 0; i < 7; i++)
    {
        printf("%d\n",brr[i]);

    }

    printf("elements for third array:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n",crr[i]);
    }
    return 0;
}