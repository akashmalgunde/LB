class MyString
{
    char cStr[25];

    public:
    MyString(char *cptr)
    {
        this->cStr = cptr;
    }

    bool checkRotation(char *cptr)
    {
        char *ccptr = null;

        while(this->cStr[i] != '\0')
        {
            ccptr[i] = this->cStr[i];
            i++;
        }

        int j = 0;
        while(this->cStr[j] != '\0')
        {
            ccptr[i] = this->cStr[j];
            i++;
        }

        ccptr[i] = '\0';

        int k = 0;

        while(cptr[k] != '\0')
        {
            
            k++;
        }
        
    }


};

int main()
{
    MyString m("abcd");

    if(m.checkRotation("cdab"))
        cout<<"Rotation";
    else
        cout<<"Not Rotation";
    
    return 0;
}