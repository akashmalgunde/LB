#include<stdio.h>

int main()
{

    char Str1[25] = "hello";

    for(int i = 0; i < 25; i++)
    {
        if(Str1[i] >= 'a' && Str1[i] <= 'z')
        {
            printf("%c",Str1[i]);
        }
        else if(Str1[i] == '\0')
        {
            //printf("Coming inside");
            printf("/0");
        }
        else{
           // printf("Coming inside");
            printf("gb");

        }
        
    }
 

    return 0;
}