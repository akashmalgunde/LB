#include<stdio.h>

typedef struct node node;

struct node
{
    int data;
    struct Node *next;
};

int main()
{
    node n;
    node n1;

    n.data = 10;
    n.next = &n1;

    n1.data = 20;
    n1.next = NULL;

    node *Head = &n;

    printf("%d\n",Head->data);
    printf("%u\n",Head->next);

    Head = Head->next;

    printf("%d\n",Head->data);
    printf("%u\n",Head->next);




    return 0;
}