class Numbers
{
    int iNo;

    public Numbers(int n)
    {
        this.iNo = n;
    }

    public int calculateSum()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iSum = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    public int calculateProduct()
    {
        int iProduct = 1;
        int iTemp = 0;
        int iDigit = 0;

        iTemp = this.iNo;
        //System.out.println(iTemp);
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iProduct = iProduct * iDigit;
            iTemp = iTemp / 10;
        }
        //System.out.println(iProduct);
        return iProduct;
    }

    public boolean checkSpy()
    {
        boolean bRet = false;

        //System.out.println(calculateProduct());
        //System.out.println(calculateSum());

        if(calculateProduct() == calculateSum())
            bRet = true;

        return bRet;

    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(1124);

        if(n.checkSpy())
            System.out.println("Numbers is spy");
        else
            System.out.println("Number is not spy number");
    }
}