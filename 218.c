#include<stdio.h>

void Display()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            if(i == 1 || i == 4)
            {
                printf("* ");
            }
            else if(i == 2 && j == 3 || i == 3 && j == 2)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    Display();

    return 0;
}