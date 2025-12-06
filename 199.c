#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "";

    char Str2[] = "Akash";

    char *ptr =strcpy(str1,Str2);

    printf("%s",*ptr);



    return 0;
}