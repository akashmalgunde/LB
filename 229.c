#include<stdio.h>
#include<string.h>


int main()
{
    char * ptr = NULL;

    char Str[] = "Hello";

    char Str1[] = "el";

    ptr = strstr(Str,Str1);

    if(ptr != NULL)
    {
        printf("Substring is present\n");
    }
    else
    {
        printf("Substring is not present\n");
    }

    return 0;
}