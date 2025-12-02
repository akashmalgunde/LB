#include<stdio.h>

int main()
{
    int iNo = 10;

    int *ptr = &iNo;

    int **pptr = &ptr;

    printf("%d\n",&iNo);
    printf("%d\n",&ptr);
    printf("%d\n",&pptr);

    printf("%d\n",**pptr);


    return 0;
}

/*

    iNo     0

*/