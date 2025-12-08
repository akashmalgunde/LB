#include<stdio.h>
#include<string.h>

int main()
{

    char Str1[10] = "Hello";
    char Str2[] = "World";

    strcat(Str1,Str2);

    printf("%s\n",Str1);

    return 0;
}