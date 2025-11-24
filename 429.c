#include<stdio.h>

void DisplayFreq(char *Str)
{
    int iCnt = 0;
    int i = 0; 
    int j = 0;

    while(Str[i] != '\0')
    {
        iCnt = 0;
        j = i;
        while (Str[j] != '\0')
        {
            /* code */
            if(Str[i] == Str[j])
            {
                iCnt++;
            }

            j++;

        }
        printf("%c -> %d\n",Str[i],iCnt);

        i++;
        
    }
}

int main()
{
    char Str[25];

    printf("Enter the string:\n");
    scanf("%s",Str);

    DisplayFreq(Str);

    return 0;
}