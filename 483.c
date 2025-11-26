#include<stdio.h>

void Display(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("# ");
    }
    printf("\n");
}


int main()
{
    int iNo = 0;

    printf("Enter the no:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}