#include<stdio.h>

typedef struct Player Player;

struct Player
{
    int iJerseyNo;
    char cName[50];
    int iAge;
    int iScore;
};

void Accept(Player *P1)
{
    for(int i = 0; i < 2; i++)
    {
        printf("Enter data for Player %d\n",i+1);
        scanf("%d",&P1[i].iJerseyNo);
        scanf("%s",P1[i].cName);
        scanf("%d",&P1[i].iAge);
        scanf("%d",&P1[i].iScore);
    }
}

void Display(Player *P1)
{
    for(int i = 0; i < 2; i++)
    {
        printf("For Player %d\n",i+1);
        printf("%d\n",P1[i].iJerseyNo);
        printf("%s\n",P1[i].cName);
        printf("%d\n",P1[i].iAge);
        printf("%d\n",P1[i].iScore);
        printf("\n");
    }

}

int main()
{
    Player P1[5];

    Accept(P1);

    Display(P1);

    return 0;
}