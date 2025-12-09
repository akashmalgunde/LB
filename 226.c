#include<stdio.h>

char* strrchrX(char Crr[],char Ch)
{
    int i = 0;
    char *ptr = NULL;

    while(Crr[i] != '\0')
    {
        if(Crr[i] == Ch)
        {
            ptr = &Crr[i];
        }
        i++;
    }
    return ptr;

}

int main()
{
    char Crr[25] = "Hello World";

    int ch = 'a';

    char *ptr = NULL;

    ptr = strrchrX(Crr,ch);

    if(ptr == NULL)
    {
        printf("Given character is not present in String\n");
        printf("%d",*ptr);
    }
    else
    {
        printf("Given character is present in the array\n");
        printf("%d",ptr-Crr);
    }



    return 0;
}