
class Number
{
    int iNo;

    public Number(int i)
    {
        this.iNo = i;
    }

    int calFact(int iNo)
    {
        int iFact = 1;
        for(int i = 1; i <= iNo; i++)
            iFact = iFact * i;

        return iFact;
    }

    boolean checkKrishnamurthy()
    {
        boolean bRet = false;
        int iDigit = 0;
        int iSum = 0;
        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + calFact(iDigit);
            iTemp = iTemp / 10;
        }

        if(iSum == this.iNo)
            bRet = true;


        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Number n = new Number(141);

        if(n.checkKrishnamurthy())
            System.out.println("Kryshnamurthy");
        else
            System.out.println("Not Kryshnamurthy");
    }
}