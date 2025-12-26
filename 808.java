import java.util.Scanner;

class logic
{
    void Display(int iRows,int iColumns)
    {
        for(int i = 1; i <= iRows; i++)
        {
            for(int j = 1; j <= iColumns; j++)
            {
                if(i == 1 && j == 1 || i == 1 && j == iColumns || i == iRows && j == 1 || j == iColumns && i == iRows)
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
        int iColumns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows:");

        iRows = sobj.nextInt();

        System.out.println("Enter the number of columns:");

        iColumns = sobj.nextInt();

        logic lobj = new logic();

        lobj.Display(iRows,iColumns);

    }
}