#include<stdio.h>

void reverseString(char *Src,char *Dest)
{
    int i = 0;
    int j = 0;

    for(i = 4; i >= 0; i--,j++)
    {
        Dest[j] = Src[i]; 
    }
    Dest[j] = '\0';
}

int main()
{
    char Str1[25];
    char Str2[25];

    printf("Enter the string:\n");
    scanf("%s",Str1);

    reverseString(Str1,Str2);

    printf("%s",Str2);



    return 0;
}