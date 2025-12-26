#include<stdio.h>
typedef struct Player Player;

struct Player
{
    int JerseyNo;
    int iAge;
    char cName[50];
    int iScore;
};

int main()
{
    Player P1;
    

    printf("%d\n",P1.JerseyNo);
    printf("%d\n",P1.iAge);
    printf("%s\n",P1.cName);
    printf("%d\n",P1.iScore);
}