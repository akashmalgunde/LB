#include<iostream>
using namespace std;

int main()
{
    /*
        boolean bRet = false;
        for(int i = 0; i < BankDAO.count; i++)
        {
            if(BankDAO.arr[i].accountNumber == accountNumber)
            {
                bRet = true;
                while(i < BankDAO.count-1)
                {
                	BankDAO.arr[i] = BankDAO.arr[i+1];
                }
                break;
            }
    
    
    */

    int iSize = 7;
    int Arr[] = {1,2,3,4,5,8,9};

    for(int i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"  ";
    }
    cout<<"\n";

    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == 4)
        {
            while(i < iSize-1)
            {
                Arr[i] = Arr[i+1];
                i++;
            }
            iSize--;

            break;
        }
    }

    for(int i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"  ";
    }


    return 0;
}