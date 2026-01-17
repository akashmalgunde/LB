#include<iostream>
using namespace std;

bool checkSquare(int iNo)
{
    int iSquare = 0;
    int i = 0;

    while(iSquare < iNo)
    {
        iSquare = i * i;
        i++;
    }

    if(iSquare == iNo)
        return true;
    else    
        return false;
}

void loop(int iStart,int iEnd)
{
    bool bRet = false;

    for(int i = iStart; i <= iEnd; i++)
    {
        bRet = checkSquare(i);
        if(bRet == true)
            cout<<i<<"\n";
    }
}

int main()
{
    int iStart = 0;
    int iEnd = 0;

    cout<<"Enter the start:\n";
    cin>>iStart;

    cout<<"Enter the end:\n";
    cin>>iEnd;

    loop(iStart,iEnd);

    return 0;
}