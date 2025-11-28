#include<stdio.h>

void Display(int iValue)
{
    char ch = 'a';
    for(int i = 1; i <= iValue; i++)
        printf("%c\t",ch++);

    printf("\n");
}

int main()
{
    int iNo = 0;

    printf("Enter the count:\n");
    scanf("%d",&iNo);

    Display(iNo);


    return 0;
}