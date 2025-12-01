#include<stdio.h>

void Toggle(char *Ptr)
{
    int i = 0;
    while(Ptr[i] != '\0')
    {
        if(Ptr[i] >= 'a' && Ptr[i] <= 'z')
        {
            Ptr[i] = Ptr[i] - 32;
        }
        else if(Ptr[i] >= 'A' && Ptr[i] <= 'Z')
        {
            Ptr[i] = Ptr[i] + 32;
        }
        i++;
    }
}

int main()
{
    char Str[25];

    printf("Enter the string:\n");
    scanf("%s",Str);

    Toggle(Str);

    printf("%s",Str);
    return 0;
}