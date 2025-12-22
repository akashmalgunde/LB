#include<stdio.h>
#include<string.h>

typedef struct Player player;

struct Player
{
    int JerseyNo;
    char Name[40];
    int iAge;
};

void Accept(player *p1)
{
    scanf("%d",&p1->JerseyNo);
    scanf("%s",p1->Name);
    scanf("%d",&p1->iAge);

}

int main()
{
    player p1;

    Accept(&p1);


    return 0;
}