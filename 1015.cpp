#include<iostream>
using namespace std;

class MyString
{
    private:
    char *mystr;

    public:
    MyString(char *ptr)
    {
        this->mystr = ptr;
    }

    int calSize()
    {
        int iSize = 0;
        while(this->mystr[iSize] != '\0')
        {
            iSize++;
        }

        return iSize;
    }
    bool checkPalindrome()
    {
        char *myptr = new char[25];
        bool bRet = true;

        int i = 0;
        int j = 0;

        for(i = 0, j = calSize() - 1; j >= 0; i++ , j--)
        {
            myptr[i] = this->mystr[j];
        }

        myptr[i] = '\0';

        i = 0;

        while(this->mystr[i] != '\0')
        {
            if(this->mystr[i] != myptr[i])
            {
                bRet = false;
                break;
            }
            i++;
        }
        return bRet;
    }
};

int main()
{
    MyString m("mada");

    bool bRet = false;

    bRet = m.checkPalindrome();

    if(bRet == true)
        cout<<"Palindrome\n";
    else
        cout<<"Not palindrome\n";
    return 0;
}