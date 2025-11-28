#include<stdio.h>

void Display(int iValue)
{
    for(int i = 1; i < iValue; i++)
        printf("%d\t",i);
    
    for(int i = iValue; i >= 1; i--)
        printf("%d\t",i);
    

    printf("\n");
}

int main()
{
    int iNo = 0;

    printf("Enter the count:\n");
    scanf("%d",&iNo);

    Display(iNo);


    return 0;
}