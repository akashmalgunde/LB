#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;

    printf("Enter the size of the array:\n");
    scanf("%d",&iSize);

    int *Arr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the elements:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("\n");
    

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");

    free(Arr);
    

    return 0;
}