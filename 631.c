#include<stdio.h>
#include<stdlib.h>
#define bool int
#define true 1
#define false 0

bool mystrrev(char *Str1,int iSize)
{
    bool bRet = true;
    char *ptr = (char*)malloc(sizeof(char)*iSize);
    int i = 0;
    while(Str1[i] != '\0')
    {
        i++;
    }
    int iCnt = i;

    printf("%d\n",iCnt);

    for(int j = iCnt-1,i = 0; j >= 0; j--,i++)
    {
        ptr[i] = Str1[j];
        printf("%c - %c\n",ptr[i],Str1[j]);
    }

    ptr[i] = '\0';

    int j = 0;
    while(Str1[j] != '\0' || ptr[j] != '\0')
    {
        if(Str1[j] != ptr[j])
        {
            bRet = false;
            break;
        }
        j++;
    }

    return bRet;


}

int main()
{
    char Str1[10];
    char *ptr = NULL;
    bool bRet = false;

    printf("Enter the string:\n");
    scanf("%s",Str1);

    bRet = mystrrev(Str1,10);

    bRet == true ? printf("String is palindrome\n") : printf("String is not palindrome\n");

    return 0;
}