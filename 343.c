#include<stdio.h>
void mystrcpy(char *Dest,char *Source)
{
    int i = 0;
    while(Source[i] != '\0')
    {
        Dest[i] = Source[i];
        i++;
    }
    Dest[i] = '\0';
}
typedef struct Player Player;

struct Player
{
    int JerseyNo;
    int iAge;
    char cName[50];
    int iScore;
};

Player Accept()
{
    Player P1;
     P1.JerseyNo = 47;
    P1.iAge = 22;

    //1245 = 1255;
    mystrcpy(P1.cName,"Hello");
    P1.iScore = 592;

    return P1;
}

void Display(Player P1)
{
    printf("%d\n",P1.JerseyNo);
    printf("%d\n",P1.iAge);
    printf("%s\n",P1.cName);
    printf("%d\n",P1.iScore);
}

int main()
{
    Player P1;

    P1 = Accept();

    Display(P1);
}