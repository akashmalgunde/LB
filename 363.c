#include<stdio.h>

typedef struct Player Player;

struct Player
{
    int iJersyNo;
    char cName[50];
    int iAge;
    int iRuns;
};

void Accept(Player *P)
{
    printf("Enter the data:\n");
    scanf("%d",&P->iJersyNo);
    scanf("%s",P->cName);
    scanf("%d",&P->iAge);
    scanf("%d",&P->iRuns);
}

void Display(Player *Q)
{
    printf("Entered data is:\n");
    printf("%d\n",Q->iJersyNo);
    printf("%s\n",Q->cName);
    printf("%d\n",Q->iAge);
    printf("%d\n",Q->iRuns);
}

int main()
{
    Player P1;

    Accept(&P1);

    Display(&P1);

    return 0;
}