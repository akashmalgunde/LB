class Number
{
    int iNo;

    public Number(int iNo)
    {
        this.iNo = iNo;
    }

    int calculateSquare()
    {
        return this.iNo * this.iNo;
    }

    int calculateSum()
    {
        int iSum = 0;
        int iTemp = 0;
        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iSum = iTemp % 10;
            iTemp = iTemp / 10;
        }

        return iSum;
    }
    boolean checkNeon()
    {
        boolean bRet = false;

        int iSquare = 0;
        int iSum = 0;

        iSquare = calculateSquare();
        iSum = calculateSum();

        if(this.iNo == iSum)
            bRet = true;

        return bRet;

    }

}


class Test
{
    public static void main(String args[])
    {
        Number n = new Number(17);

        if(n.checkNeon())
            System.out.println("Neon");
        else
            System.out.println("Not Neon");
    }
}