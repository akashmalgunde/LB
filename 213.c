#include<stdio.h>

void mystrcpy(char Str2[],char Str1[])
{
    int i = 0;

    while(Str1[i] != '\0')
    {
        Str2[i] = Str1[i];
        i++;
    }
    Str2[i] = '\0';
    
}

int main()
{
    char Str1[] = "Jay Ganesh";
    char Str2[10];

    mystrcpy(Str2,Str1);

    printf("%s",Str2);

    printf("%s",Str1+1);

    return 0;


}
