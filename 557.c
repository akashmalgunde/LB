#include<stdio.h>

void DisplayDigit(int iNo)
{

    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 16;
        if(iDigit < 10)
            printf("%d ",iDigit);
        
        else if(iDigit == 10)
            printf("A ");
        
        else if(iDigit == 11)
            printf("B ");

        else if(iDigit == 12)
            printf("C ");
        
        else if(iDigit == 13)
            printf("D ");

        else if(iDigit == 14)
            printf("E ");
        
        else if(iDigit == 15)
            printf("F ");
        
    
        iNo = iNo / 16;
    }
}


void IterateArray(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("%d - ",Arr[i]);
        DisplayDigit(Arr[i]);
        printf("\n");
    }
}

int main()
{
    int Arr[5] = {10,20,30,15,56};

    IterateArray(Arr,5);

    return 0;
}