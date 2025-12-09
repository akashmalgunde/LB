#include<stdio.h>
#include<string.h>

int main()
{
    char Crr[25] = "Hello World";

    int ch = 'o';

    char *ptr = NULL;

    ptr = strrchr(Crr,ch);

    if(ptr == NULL)
    {
        printf("Given character is not present in String\n");
    }
    else
    {
        printf("Given character is present in the array\n");
        printf("%d",ptr-Crr);
    }



    return 0;
}