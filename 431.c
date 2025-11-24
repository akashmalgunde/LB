#include<stdio.h>

int main()
{
    int Arr[5];

    printf("Enter the elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("\n");
    

    for(int i = 0; i < 5; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
    

    return 0;
}