#include<iostream>
using namespace std;

int factorial(int iDigit)
{
    int iFact = 1;
    for(int i = iDigit; i >= 2; i--)
    {
        iFact = iFact * i;
    }

    return iFact;
}


bool checkStrong(int iNo)
{
    bool bRet = true;
    int iFact = 1;
    int iSum = 0;
    int iTemp = iNo;
    int iDigit = 0;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        //cout<<iDigit<<" ";
        iFact = factorial(iDigit);
        //cout<<iFact<<" ";
        iSum = iSum + iFact;
        cout<<iSum<<"\n";
        iTemp = iTemp / 10;
    }

    if(iSum != iNo)
        bRet = false;

        cout<<iSum<<"\n";
    return bRet;
    


}

int main()
{
    //int iNo = 0;
    bool bRet = false;

    

    //cout<<iNo;

    int Arr[] = {145,62,35,49,58};

    for(int i = 0; i < 5; i++)
    {
        cout<<Arr[i]<<"  ";
        bRet = checkStrong(Arr[i]);

        if(bRet == true)
            cout<<"given number is strong\n";
        else 
            cout<<"Given number is not strong\n";
    }

    return 0;
}