import java.util.Scanner;

class Number
{
    int iNo;

    public Number(int iNo)
    {
        this.iNo = iNo;
    }

    int calculateSumDigit(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        return iSum;
    }

    boolean checkNeon()
    {
        int iSquare = 0;
        boolean bRet = false;
        int iSum = 0;

        iSquare = this.iNo * this.iNo;

        iSum = calculateSumDigit(iSquare);

        if(this.iNo == iSum)
            bRet = true;

        return bRet;

    }
}

class Test
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();

        Number n = new Number(iNo);

        boolean bRet = n.checkNeon();

        if(bRet == true)
            System.out.println(n.iNo+" is neon");
        else
            System.out.println(n.iNo+" is not neon");
    }
}
