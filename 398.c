#include<stdio.h>

void  Add(int *Arr,int *iCount,int iSize,int iNo)
{
    if(*iCount < iSize)
    {
        Arr[*iCount] = iNo;
        (*iCount)++;
    }
    else{
        printf("stack is full\n");
    }
}

void Remove(int *Arr,int *iCount)
{
    int i = 0;
    for(i = 0; i < *iCount - 1; i++)
    {
        Arr[i] = Arr[i + 1];
    }
    Arr[i] = 0;
    (*iCount)--;
}

void Display(int *Arr,int iCount)
{
    for(int i = 0; i < iCount; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
}
int main()
{
    int iSize = 10;
    int iCount = 3;
    int Arr[10] = {10,20,30};

    Display(Arr,iCount);


    Add(Arr,&iCount,iSize,40);


    Display(Arr,iCount);

    Remove(Arr,&iCount);

    Display(Arr,iCount);

    Remove(Arr,&iCount);

    Display(Arr,iCount);

    return 0;
}