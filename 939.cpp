#include<iostream>
//using namespace std;

class Pattern
{
    int iRows;

    public:
    Pattern(int i)
    {
        this->iRows = i;
    }

    void display()
    {
        int iCnt1 = this->iRows;
        int iCnt2 = this->iRows;

        for(int i = 1; i <= this->iRows; i++,iCnt1--,iCnt2++)
        {
            for(int j = 1; j < iRows * 2; j++)
            {
                if(j >= iCnt1 && j <= iCnt2)
                    std::cout<<"* ";
                else
                    std::cout<<"  ";
            }
            std::cout<<"\n";
        }
    }
};

int main()
{
    int iRows = 0;

    std::cout<<"Enter the number of rows:\n";
    std::cin>>iRows;

    Pattern pobj(iRows);

    pobj.display();
    return 0;
}