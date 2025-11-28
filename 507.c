#include<stdio.h>

void Display(int iValue)
{
    for(int i = 1; i <= iValue; i++)
    {
        for(int j = iValue; j >= 1; j--)
            printf("%d ",i);
        
            printf("\n");
    }
    

    printf("\n");
}

int main()
{
    int iNo = 0;

    printf("Enter the no of rows:\n");
    scanf("%d",&iNo);

    Display(iNo);


    return 0;
}