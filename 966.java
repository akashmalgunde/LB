class Pattern
{
    int iRows;

    public Pattern(int iRows)
    {
        this.iRows = iRows;
    }

    public void display()
    {
        int iCnt1 = 0;
        int iCnt2 = 0;

        iCnt1 = this.iRows;

        for(int i = 1; i <= this.iRows; i++,iCnt1--)
        {
            iCnt2 = iCnt1;
            for(int j = 1; j <= i; j++,iCnt2++)
            {
                System.out.print(iCnt2+" ");
            }
            System.out.println();
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Pattern p = new Pattern(5);

        p.display();
    }
}