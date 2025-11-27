#include<stdio.h>

char checkLow(char *cPtr)
{
    
    char ch = cPtr[0];
    int i = 1;
    while(cPtr[i] != '\0')
    {
        //printf("Coming inside\n");
        if(ch > cPtr[i])
            ch = cPtr[i];

        if(ch == 'a' || ch == 'A')
            break;
        i++;
    }

    return ch;
}
int main()
{
    char Str[50];

    char cRet = '\0';

    printf("Enter the string:\n");
    scanf("%s",Str);

    cRet = checkLow(Str);

    printf("%c is Lowest character in the given string\n",cRet);

    return 0;

}