#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *ptr = (char*)malloc(sizeof(char) * 7);

    printf("Enter the string\n");
    scanf("%s",ptr);

    printf("Entered string is :\n");
    printf("%s\n",ptr);

    return 0;
}