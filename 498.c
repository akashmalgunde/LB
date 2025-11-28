#include<stdio.h>

void Display(int iValue)
{
    char ch = '\0';
    for(int i = 1,ch = 'A'; i <= iValue; i++,ch++)
        printf("%c\t",ch);

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