#include<iostream>
using namespace std;

class MyString
{
    public:
    char *cArr;

    public:
    MyString(char *cptr)
    {
        this->cArr = cptr;
    }

    bool checkIsogram()
    {
        bool bRet = true;
        int i = 0;
        int j = 0;

        while(this->cArr[i] != '\0')
        {

            j = i + 1;

            while(this->cArr[j] != '\0')
            {
                if(this->cArr[i] == this->cArr[j])
                {
                    //cout<<(char)this->cArr[i]<<"and "<<(char)this->cArr[j]<<"\n";
                    bRet = false;
                    return bRet;
                }
                j++;
            }
            i++;
        }

        return bRet;
    }

};


int main()
{
    MyString *mobj = new MyString("machine");
    
    cout<<mobj->cArr<<"\n";
    if(mobj->checkIsogram())
        cout<<"Isogram\n";
    else
        cout<<"Not Isogram\n";

    return 0;
}