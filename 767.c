#include<stdio.h>
#include<stdlib.h>

void Add(int *arr,int *iCnt,int iSize,int iNo)
{
    arr[*iCnt] = iNo;

    *iCnt = *iCnt + 1;

}

void Remove(int *Arr,int *iCnt)
{
    for(int i = 0; i < *iCnt-1; i++)
        Arr[i] = Arr[i+1];
    
    *iCnt = *iCnt - 1;
}

void Display(int *Arr,int iCnt)
{
    if(iCnt == 0)
    {
        printf("No element is there in queue\n");
        return;
    }
    for(int i = 0; i < iCnt; i++)
        printf("%d\t",Arr[i]);

    printf("\n");
}

int main()
{
    int iSize = 10;
    int *Arr = malloc(sizeof(int)*iSize);

    int iCnt = 0;

    Add(Arr,&iCnt,iSize,10);

    Display(Arr,iCnt);

    Remove(Arr,&iCnt);

    Display(Arr,iCnt);

    Add(Arr,&iCnt,iSize,10);
    Add(Arr,&iCnt,iSize,20);
    Add(Arr,&iCnt,iSize,30);
    Add(Arr,&iCnt,iSize,40);

    Display(Arr,iCnt);

    return 0;
}