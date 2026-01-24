class Digit
{
    int iNo;

    public Digit(int iNo)
    {
        this.iNo = iNo;
    }

    int checkSmallest()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iMin = 0;

        iTemp = this.iNo;
        iMin = 9;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit < iMin)
                iMin = iDigit;
            if(iMin == 0)
            {
                break;
            }
            iTemp = iTemp / 10;
        }

        return iMin;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digit d = new Digit(61655123);

        System.out.println(d.checkSmallest());
    }
}