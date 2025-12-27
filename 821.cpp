#include<iostream>
using namespace std;

bool checkAnagram(char *Str1,char *Str2)
{
    bool bRet = true;
    int i = 0;
    int j = 0;
    int k = 0;
    int iCnt1 = 0;
    int iCnt2 = 0;

    while(Str1[i] != 0 && Str2[i] != '\0')
    {
        int iCnt1 = 0;
        int iCnt2 = 0;

        while(Str1[j] != '\0')
        {
            Str[j] 
        }

    }
}

int main()
{
    char cArr[20];
    char cBrr[20];
    bool bRet = false;

    cout<<"Enter the string1:"<<"\n";
    cin>>cArr;

    cout<<"Enter the string2:"<<"\n";
    cin>>cBrr;

    bRet = checkAnagram(cArr,cBrr);

    if(bRet == true)
        cout<<"Strings are anagram";
    else
        cout<<"Strings are not anagram";

    return 0;
}