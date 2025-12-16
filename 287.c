#include<stdio.h>

int main()
{

    char Carr[10] = "";

    for(int i = 0; i < 10; i++)
    {
        if(Carr[i] == '\0')
        {
            printf("Null\t");
        }
    }

    return 0;
}