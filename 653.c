#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 0;
    for(int i = iRows; i >= 1; i--)
    {
        iCnt = i + 1;
        for(int j = 1; j <= iRows; j++)
            if((i + 1)% 2 == 0)
                printf("%d ",iCnt);
            else
                printf("%d ",j);
           
        printf("\n");
    }
}

int main()
{
    int Arr[] = {2,5,4,5,6};

    for(int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("\n");
        Display(Arr[i]);
        printf("\n");
        printf("\n");
    }

    

    return 0;
}