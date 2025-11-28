#include<stdio.h>

void DisplayCount(char *ptr)
{
    int i = 0;
    int iDigit = 0;
    int iVowel = 0;
    int iConsonant = 0;
    int iSpace = 0;

    while(ptr[i] != '\0')
    {
        if(ptr[i] == ' ')
            iSpace++;
        
        else if(ptr[i] == '0' || ptr[i] == '1' || ptr[i] == '2' || ptr[i] == '3' || ptr[i] == '4' || ptr[i] == '5' || ptr[i] == '6' || ptr[i] == '7' || ptr[i] == '8' || ptr[i] == '9')
            iDigit++;

        else if(ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u' || ptr[i] == 'A' || ptr[i] == 'E' || ptr[i] == 'I' || ptr[i] == 'O' || ptr[i] == 'U' )
            iVowel++;
        else
            iConsonant++;

        i++;
    }

    printf("iDigit : %d\n",iDigit);
    printf("vowel : %d\n",iVowel);
    printf("consonant : %d\n",iConsonant);
    printf("space : %d\n",iSpace);


}

int main()
{
    char Str[50] ="Hello world 2024";

    DisplayCount(Str);

    return 0;
}
