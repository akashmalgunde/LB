#include<stdio.h>

void Check(char *ptr)
{
    int i = 0;
    int iTemp = 0;
    while(ptr[i] != '\0')
    {
        if(ptr[i] == ' ')
        {
            while (ptr[i+1] != ' ' || ptr[i+1] != '\0')
            {
                /* code */
                ptr[i] = ptr[i+1];
                i++;
            }

            if(ptr[i + 1] == '\0')
                ptr[i] = '\0';
        
        }
        else
            i++;
    }
}


int main()
{
    char Str[10];

    char c = '\0';

    printf("Enter the string:\n");
    
    int i = 0;

    scanf("%c",&c);

    while(c != '\n')
    {
        Str[i] = c;
        scanf("%c",&c);
        i++;
    }
    Str[i] = '\0';

    //printf("%s\n",Str);

    Check(Str);


    printf("%s\n",Str);


    return 0;
}