import java.util.Scanner;

class logic
{
    void Display(int iRows)
    {
        for(int i = 1; i <= iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(i == iRows || j == 1 || i == j)
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        int iRows = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");

        iRows = sobj.nextInt();

        logic lobj = new logic();

        lobj.Display(iRows);

    }
}