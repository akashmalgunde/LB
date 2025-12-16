#include<stdio.h>


int main()
{
    char Carr[10] = "Hello";

    for(int i = 0; i < 10; i++)
    {
        printf("%c\t",Carr[i]);

        if(Carr[i] == '\0')
        {
            printf("Null\t");
        }
    }

    return 0;
}