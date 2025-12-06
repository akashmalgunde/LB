#include<stdio.h>

int main()
{
    char Crr[10];
    char ch;
    int i = 0;

    printf("enter the string:\n");

    while(ch != '\n')
    {
        ch = getch();
        Crr[i] = ch;
        i++;
    }
    ch='\0';
    printf("Entered string is:\n");

     while(ch != '\n')
    {
        printf("%c",Crr[i]);
        i++;
    }



    return 0;
}