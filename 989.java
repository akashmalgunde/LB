class Numbers
{
    int iNo;

    public Numbers(int i)
    {
        this.iNo = i;
    }

    int calculateSum()
    {
        int iTemp = 0;
        int iSum = 0;

        iTemp = this.iNo;

        while (iTemp != 0)
        {
            iSum = iSum + iTemp % 10;
            iTemp = iTemp / 10;    
        }

        return iSum;
    }

    boolean checkPrime(int iNo)
    {
        boolean bRet = true;

        for(int i = 2; i <= iNo /2; i++)
        {
            if(iNo % i == 0)
            {
                bRet = false;
                break;
            }
        }

        return bRet;
    }

    boolean checkSmith()
    {
        int iSum = 0;
        int iDigit = 0;
        int iTemp = 0;
        boolean bRet = false;


        iTemp = this.iNo;

        while (iTemp != 0) 
        {
            iDigit = iTemp % 10;

            if(checkPrime(iDigit))
                iSum = iSum + iDigit;

            iTemp = iTemp / 10;
        }

        if(iSum == this.iNo)
        {
            bRet = true;
        }

        return bRet;
    }

}


class Test
{
    public static void main(String args[])
    {

        Numbers n = new Numbers(666);

        if(n.checkSmith())
            System.out.println("Smith");
        else
            System.out.println("Not Smith");
    }
}