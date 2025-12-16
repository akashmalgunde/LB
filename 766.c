#include<stdio.h>


void Add(int *Arr,int *iCnt,int iNo)
{
    Arr[*iCnt] = iNo;
    *iCnt = (*iCnt) + 1;
}

void Delete(int *Arr,int *iCnt)
{
    Arr[*iCnt] = 0;
    *iCnt = (*iCnt) -1;
}

void Display(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
        printf("%d\t",Arr[i]);

    printf("\n");
}

int main()
{
    int Arr[20];
    int iCnt = 0;

    Add(Arr,&iCnt,10);

    Display(Arr,iCnt);

    Add(Arr,&iCnt,20);

    Display(Arr,iCnt);

    Add(Arr,&iCnt,20);

    Display(Arr,iCnt);

    Delete(Arr,&iCnt);

    Display(Arr,iCnt);

    Delete(Arr,&iCnt);

    Display(Arr,iCnt);




    return 0;
}