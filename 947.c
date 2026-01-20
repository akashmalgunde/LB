#include<stdio.h>

void displayPair(int *iArr,int iSize,int iSum)
{
    for(int i = 0; i < iSize - 1; i++)
    {
        for(int j = i + 1; j < iSize; i++)
        {
            if(iArr[i] + iArr[j] == iSum)
            {
                printf("%d + %d\n",iArr[i],iArr[j]);
                break;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 7, 11, 15,20};

    displayPair(arr,5,18);

    return 0;
}