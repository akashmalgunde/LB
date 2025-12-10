#include<stdio.h>
#include<stdlib.h>

int* Display(int *Arr,int iSize)
{
    int *Brr = (int*)malloc(sizeof(int) * iSize);

    for(int i = 0; i < iSize; i++)
    {
        Brr[i] = Arr[i];
    }

    return Brr;
}

int main()
{
    int Arr[10] = {10,20,30,40,50,60,70,80,90,100};

    int *Brr = Display(Arr,10);

    printf("%d",Brr);

    return 0;
}