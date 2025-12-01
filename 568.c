#include<stdio.h>
#include<string.h>

int main()
{

    char Arr[25];
    int iLen = 0;

    printf("Enter the name:\n");
    scanf("%[^'\n']s",Arr);

    iLen = strlen(Arr);

    printf("%s",Arr);
    printf("%d is length of %s\n",iLen,Arr);
    return 0;
}