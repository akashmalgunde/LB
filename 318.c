#include<stdio.h>

typedef struct S S;

struct S
{
    int a;
    int *b;
};

int main()
{
    S S1;
    S1.a = 20;
    S1.b = &S1.a;

    printf("%d\n",S1.a);
    printf("%d\n",*S1.b);

    return 0;
}