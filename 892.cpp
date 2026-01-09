#include<iostream>
using namespace std;

int checkSecondMax(int iNo)
{
    int iDigit = 0;
    int iMin1 = 9;
    int iMin2 = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin1)
        {
            iMin2 = iMin1;
            iMin1 = iDigit;
        }
        else if(iDigit < iMin2)
            iMin2 = iDigit;
        iNo = iNo /10;
    }

    return iMin2;

}

int main()
{
    int iNo;
    int iRet = 0;

    cout<<"Enter the number:";
    cin>>iNo;


    iRet = checkSecondMax(iNo);

    cout<<iRet<<"\n";

    return 0;
}