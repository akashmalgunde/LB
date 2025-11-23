#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;


    ptr = (int*)malloc(25);

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
    }
    else
    {
        printf("Memory allocated successfully\n");
    }



    return 0;
}