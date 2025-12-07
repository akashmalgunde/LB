#include<stdio.h>

int main()
{
    char Str[5] = {'a','b','c','d','e'};

    char str1[] = "Hello";

    char Str2[25];

    char ch = '\0';

    int i = 0;

    scanf("%c",&ch);

    while(ch != '\n')
    {

        Str2[i] = ch;


        i++;

        scanf("%c",&ch);

        
    }
    printf("%d is the value of i\n",i);

    Str2[i] = '\0';

    printf("%s\n",Str2);

    int iCnt = 0;
    i = 0;

    while(Str[i] != '\0')
    {
        iCnt++;
        printf("Char is now : %c at %d\n",Str2[i],i);

        if(Str[i] == '\0')
        {
            printf("It is taking /0 alslo");
        }
        i++;

        

    }

    printf("Length of the array is : %d\n",iCnt);




    return 0;
}





/*


    char Str2[25];

    char ch = '\0';

    int i = 0;

    while(ch != '\n')
    {
        scanf("%c",&ch);

        Str2[i] = ch;

        i++;
    }

    printf("%s\n",Str2);



    Str2        G   a       n   e   s  h  gbg     bgb     gb  gb

    i           0   1       2   3   4   5   6

    ch          \n



    iCnt        0   1   2   3   4   5   6

    i           0   1   2   3   4   5   6  \0

    Str2        G   a       n   e   s  h  gbg     bgb     gb  gb


    int iCnt = 0;
    i = 0;

    while(Str[i] != '\0')
    {
       iCnt++;
        printf("Char is now : %c at %d\n",Str2[i],i);

        if(Str[i] == '\0')
        {
            printf("It is taking /0 alslo");
        }
        i++;

    }

    G is on 0 index
    a is on 1 index
    n is on 2 index
    e is on 3 index
    s is on 4 index
    h is on 5 index




*/