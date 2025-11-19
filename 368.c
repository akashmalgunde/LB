#include<stdio.h>
#include<stdbool.h>

bool CheckSquare(int iNo)
{
    bool bRet = false;
    int i = 1;

    while(i*i < iNo)
    {
        i++;
    }
    if(i*i == iNo)
    {
        bRet = true;
    }
    return bRet;
}

void Display(int *Arr,int iSize)
{
    bool bRet = false;

    for(int i = 0; i < iSize; i++)
    {
        bRet = CheckSquare(Arr[i]);

        if(bRet == true)
        {
            printf("%d ",Arr[i]);
        }
    }
    printf("\n");
}

int main()
{

    int Arr[5] = {1,4,9,16,26};

    Display(Arr,5);


    return 0;
}