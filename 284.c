#include<stdio.h>

void DisplayMax(int *Arr,int iSize)
{
    int iMax = 0;
    int iMax1 = 0;

    iMax = Arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(iMax < Arr[i])
        {
            iMax1 = iMax;
            iMax = Arr[i];
        }
    }

    printf("%d %d\n",iMax,iMax1);
}

int main()
{

    int Arr[5] = {1000,6,7,55,100};

    DisplayMax(Arr,5);

    return 0;
}