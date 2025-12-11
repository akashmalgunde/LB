#include<stdio.h>

void AcceptString(char *Str)
{
    printf("Enter the string:\n");
    scanf("%s",Str);
}

void DisplayPattern(char *Str)
{   
    int k = 0;
    for(int i = 1; i <= 5; i++)
    {
        k = 0;
        for(int j = 1; j <= 4; j++)
        {
            if(i == 1)
            {
                printf("%c ",Str[k]);
            }
            else
            {
                printf("  ");
            }
            
        }
        k++;
        printf("\t");
        for(int j = 1; j <= 4; j++)
        {
            if(i == 2)
            {
                printf("%c ",Str[k]);
            }
            else
            {
                printf("  ");
            }
        }
        k++;
        printf("\t");
        for(int j = 1; j <= 4; j++)
        {
            if(i == 3)
            {
                printf("%c ",Str[k]);
            }
            else
            {
                printf("  ");
            }
        }
        k++;
        printf("\t");
        for(int j = 1; j <= 4; j++)
        {
            if(i == 4)
            {
                printf("%c ",Str[k]);
            }
            else
            {
                printf("  ");
            }
        }
        k++;
        printf("\t");
        for(int j = 1; j <= 4; j++)
        {
            if(i == 5)
            {
                printf("%c ",Str[k]);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}

/*void Display(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        DisplayPattern(Str[i]);
        i++;
    }
}
*/
int main()
{
    char Str[50];

    AcceptString(Str);

    printf("%s\n",Str);

    DisplayPattern(Str);

    return 0;
}