#include<stdio.h>
#include<string.h>

int main()
{
    char Crr[15] = "Hello World";

    char Ch = 'a';

    char* iRet = 0; 

    iRet = strchr(Crr,Ch);

    printf("%d",iRet);


    return 0;
}
