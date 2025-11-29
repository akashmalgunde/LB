#include<stdio.h>

void fun()
{

    printf("Calling Fun\n");
    fun();
    
}

int main()
{

    fun();

    return 0;
}