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
            for(int j = 1; j <= iRows; j++)
            {
                if(i == j || i + j == iRows + 1)
                    System.out.print(i+"  ");
                else
                    System.out.print("  ");
                //System.out.print("* ");
            }
            System.out.println();
        }


    }
}