#include<stdio.h>
#include<string.h>



int main()
{
    
    char Str[] = "Hello";

    char Str1[] = "Hi";

    char const *ptr = Str;

    strcpy(Str,"Hi");

    printf("%s\n",Str);

    ptr = Str1;

    

    return 0;
}