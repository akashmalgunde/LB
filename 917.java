import java.util.Scanner;

class Digit
{
    int iNo;

    public Digit(int iNo)
    {
        this.iNo = iNo;
    }

    int countEvenDigit()
    {
        int iCount = 0;
        while(this.iNo != 0)
        {
            if((iNo % 10) % 2 == 0)
                iCount++;

            iNo = iNo / 10;
        }

        return iCount;
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

        Digit d = new Digit(iNo);

        System.out.println(d.countEvenDigit());

    }
}
