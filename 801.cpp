#include<iostream>
using namespace std;

bool BinarySort(int *Arr,int iSize,int iElement)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    bool bRet = false;
    int iCnt = 0;
    
    while(iStart <= iEnd)
    {
        iCnt++;
        int iMid = (iStart + iEnd) / 2;

        if(iElement == Arr[iMid])
        {
            bRet = true;
            break;
        }
        else if(iElement > Arr[iMid])
            iStart = iMid + 1;
        
        else
            iEnd = iMid - 1;
        
     }

     cout<<"Total iteraions in binary search : "<<iCnt<<"\n";

     return bRet;
}

int main()
{
    int Arr[] = {12,28,35,40,45,60};

    bool bRet = BinarySort(Arr,6,60);

    if(bRet == false)
        cout<<"Not there in array\n";
    else
        cout<<"Present in array\n";
    return 0;
}