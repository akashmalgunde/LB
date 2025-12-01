#include<stdio.h>

int main()
{

    char Arr[25];

    printf("Enter the name:\n");
    scanf("%[^'\n']s",Arr);

    printf("%s",Arr);
    return 0;
}