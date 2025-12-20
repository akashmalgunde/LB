#include<stdio.h>

void Display(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}