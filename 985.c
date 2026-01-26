#include<stdio.h>

void calculateApl(char *cPtr,int *iVowelCnt, int *iConsonantCnt)
{
    int i = 0;

    while(cPtr[i] != '\0')
    {
        if(cPtr[i] == 'a' || cPtr[i] == 'e' || cPtr[i] == 'i' || cPtr[i] == 'o' || cPtr[i] == 'u' || cPtr[i] == 'A' || cPtr[i] == 'E' || cPtr[i] == 'I' || cPtr[i] == 'O' || cPtr[i] == 'U')
            *iVowelCnt = *iVowelCnt + 1;

        else
            *iConsonantCnt = *iConsonantCnt + 1;

        i++;
    }
}

int main()
{
    char cArr[] = "Hello";

    int iVowelCnt = 0;
    int iConsonantCnt = 0;

    calculateApl(cArr,&iVowelCnt,&iConsonantCnt);

    printf("%d is vowel count\n",iVowelCnt);

    printf("%d is consonant count\n",iConsonantCnt);

    return 0;
}