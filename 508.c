#include<stdio.h>

void Display(int iValue)
{
    for(int i = iValue; i >= 1; i--)
    {
        for(int j = 1; j <= iValue; j++)
            printf("%d ",j);
        
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