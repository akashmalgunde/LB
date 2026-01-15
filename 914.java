import java.util.Scanner;

class Pattern
{
    int iRows;

    public Pattern(int iRows)
    {
        this.iRows = iRows;
    }

    public void display()
    {
        for(int i = 1; i <= iRows - 1; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }

        for(int i = iRows - 2; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRows = 0;

        iRows = sobj.nextInt();

        Pattern pobj = new Pattern(iRows);

        pobj.display();
    }
}