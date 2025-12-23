#include<stdio.h>

int main()
{

    int X= 25;

    if(X > 20)
    {
        goto label;
        printf("This will not printed\n");
    }

    printf("This will not printed\n");
    printf("This will not printed\n");
    printf("This will not printed\n");
    printf("This will not printed\n");

    label :
    printf("this will be printed\n");

}