import java.util.Scanner;

class TestDisplay
{
    public static void main(String args[])
    {
        int iRows = 0;

        Scanner sobj = new Scanner(System.in);

        iRows = sobj.nextInt();


        for(int i = 1; i <= iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }

        for(int i = iRows -1 ; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }


    }
}