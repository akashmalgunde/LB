#include<iostream>
using namespace std;

bool linearSearch(int *Arr,int iSize,int iElement)
{
    bool bRet = false;
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == iElement)
        {
            bRet = true;
            break;
        }
    }

    return bRet;
}

void Accept(int *Arr,int iSize)
{
    printf("Enter the array elements:\n");
    for(int i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Display(int *Arr,int iSize)
{
    if(iSize == 0)
    {
        cout<<"there are no elements in array\n";
    }
    else
    {
        cout<<"Entered array elements are\n";
        for(int i = 0; i < iSize; i++)
        {
            cout<<Arr[i]<<" ";
        }
        cout<<"\n";
    }      
}

int main()
{

    int iSize = 0;
    int iElement = 0;
    bool bRet = false;

    cout<<"Enter the size:";
    cin>>iSize;

    int *Arr = new int[iSize];
    Display(Arr,iSize);
    Accept(Arr,iSize);
    Display(Arr,iSize);

    cout<<"Enter the array elements that you want to search:\n";
    cin>>iSize;

    bRet = linearSearch(Arr,iSize,iElement);

    if(bRet == true)
    {
        printf("%d is present in the array\n",iElement);
    }
    else
    {
        printf("%d is not present in the array\n",iElement);
    }

    return 0;
}