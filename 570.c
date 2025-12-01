#include<stdio.h>

int CountS(char *Ptr)
{
    int i = 0;
    int iCnt = 0;
    while(Ptr[i] != '\0')
    {
        if(Ptr[i] >= 'a' && Ptr[i] <= 'z')
        {
            iCnt++;
        }
        
        i++;
    }
    return iCnt;
}

int CountC(char *Ptr)
{
    int i = 0;
    int iCnt = 0;
    while(Ptr[i] != '\0')
    {
        if(Ptr[i] >= 'A' && Ptr[i] <= 'Z')
        {
            iCnt++;
        }
        
        i++;
    }

    return iCnt;
}

int main()
{
    char Str[25];

    printf("Enter the string:\n");
    scanf("%s",Str);

    int iCnt = CountC(Str);
    printf("%d\n",iCnt);

    iCnt = CountS(Str);
    printf("%d\n",iCnt);



    printf("%s",Str);
    return 0;
}