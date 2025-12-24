#include<stdio.h>

int iNo = 10;

int main()
{   
    {
        int iNo = 20;
        {
            int iNo = 30;
            printf("%d",iNo);
        }
        printf("%d",iNo);
        
    }
    printf("%d\n",iNo);
    return 0;
   
}