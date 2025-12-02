#include<stdio.h>

void mystrCountchar(char *Str)
{
    int i = 0;
    int iCntS = 0;
    int iCntC = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
            iCntS++;
        
        else if(Str[i] >= 'A' && Str[i] <= 'Z')
            iCntC++;

        i++;
    }

    printf("%d is count of small\n",iCntS);
    printf("%d is count of capital\n",iCntC);
}

int main()
{
    char Str[20];
    //int iRet = 0;
    //char ch = '\0';

    printf("Enter the string:\n");
    scanf("%s",Str);

    mystrCountchar(Str);

    //printf("%d \n",iRet);


    return 0;
}