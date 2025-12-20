#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        printf("Note : number must be the positive integer\n");
        return;
    }

    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            printf("Jay Ganesh...\n");
        }
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