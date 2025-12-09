#include<stdio.h>
#include<string.h>

int main()
{
    char Str1[] = "Hello";

    char Str2[] = "Hell";

    int iRet = 0;

    iRet = strncmp(Str1,Str2,5);

    if(iRet == 0)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Both string are not same\n");
    }


    return 0;
}