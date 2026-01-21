class Digit
{
    int iNo;

    public Digit(int i)
    {
        this.iNo = i;
    }

    int countZero()
    {
        int iCount = 0;
        int iDigit = 0;

        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 0)
                iCount++;
            iTemp = iTemp / 10;
        }

        return iCount;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digit d = new Digit(102030);
        System.out.println(d.countZero());
    }
}