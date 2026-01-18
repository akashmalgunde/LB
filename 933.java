import java.util.Scanner;

class Numbers
{
    int iNo1;
    int iNo2;

    public Numbers(int iNo1,int iNo2)
    {
        this.iNo1 = iNo1;
        this.iNo2 = iNo2;
    }

    int findSmall()
    {
        if(this.iNo1 > this.iNo2)
            return iNo2;
        else
            return this.iNo1;
    }

    int calculateGreatestCD()
    {
        int iLimit = 0;
        int iHighCD = 0;

        iLimit = findSmall();

        for(int i = 1; i <= iLimit; i++)
        {
            if(this.iNo1 % i == 0 && this.iNo2 % i == 0)
                iHighCD = i;
        }

        return iHighCD;

    }
}

class Test
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;
        int iNo2 = 0;

        System.out.println("Enter the first number:");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the second number:");
        iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers(iNo1,iNo2);

        System.out.println(nobj.calculateGreatestCD());

    }
}