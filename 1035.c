#include<stdio.h>
#include<stdbool.h>

int calculatelength(char *c1)
{
    //int iCnt = 0;
    int i = 0;
    while(c1[i] != '\0')
    {
        i++;
        //iCnt++;
    }

    return i;
}

int calculateOccurance(char *c1,char ch)
{
    int iCnt = 0;
    int i = 0;

    while(c1[i] != '\0')
    {
        if(c1[i] >= 'A' && c1[i] <= 'Z')
            c1[i] = c1[i] + 32;
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if(c1[i] == ch)
            iCnt++;
        i++;
    }

    return iCnt;
}

bool checkAnagram(char *c1,char *c2)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    bool bRet = true;

    //printf("Imside anagram\n");
    int i = 0;
    //printf("for 2 :%d\n",calculatelength(c2));
    //printf("for 1 :%d\n",calculatelength(c1));
    if(calculatelength(c1) == calculatelength(c2))
        while(c1[i] != '\0')
        {   
            printf("%c - > %d  || %c - > %d \n",c1[i],calculateOccurance(c1,c1[i]),c1[i],calculateOccurance(c2,c1[i]));

            if(calculateOccurance(c1,c1[i]) != calculateOccurance(c2,c1[i]))
            {
                bRet = false;
                break;
            }
            i++;
        }
    else
        return false;

    return bRet;
}

int main()
{

    char cArr1[] = "naman";
    char cArr2[] = "manan";

    if(checkAnagram(cArr1,cArr2))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}