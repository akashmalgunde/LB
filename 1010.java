class Digits
{
    int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    boolean checkMagicNumber()
    {
        int iSum = 0;
        int iDigit = 0;
        int iTemp = 0;
        boolean bRet = false;

        iTemp = this.iNo;
        while(!(iTemp >= 0 && iTemp <= 9))
        {
            System.out.println("Value of iTemp:"+iTemp);
            iSum = 0;
            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                iSum = iSum + iDigit;
                iTemp = iTemp / 10;
            }

            iTemp = iSum;
        }

        //System.out.println("Value of iTemp:"+iTemp);
        if(iTemp == 1)
            bRet = true;

        return bRet;

    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(19);

        if(d.checkMagicNumber())
            System.out.println("Magic Number");
        else
            System.out.println("Not Magic");
    }
}