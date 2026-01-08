class Number
{
    private int iNo;

    public Number(int iNo)
    {
        this.iNo = iNo;
    }

    static int product(int iNo)
    {
        int iProduct = 1;
        while(iNo != 0)
        {
            iProduct = iProduct * (iNo % 10);
            iNo = iNo / 10;
        }

        return iProduct;
    }

    static int sum(int iNo)
    {
        int iSum = 0;
        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }
        return iSum;
    }

    public boolean checkSpy()
    {
        int iProduct = 0;
        int iSum = 0;
        boolean bRet = false;

        iProduct = Number.product(iNo);
        iSum = Number.sum(iNo);

        if(iProduct == iSum)
            bRet = true;

        return bRet;
        
    }
}

class Test
{
    public static void main(String args[])
    {
        Number nobj = new Number(1124);

        boolean bRet = nobj.checkSpy();

        if(bRet == true)
            System.out.println("Num is spy");
        else
            System.out.println("Num is not spy");

    }
}