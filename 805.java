import java.util.Scanner;

class logic
{
    void Display(int iRows)
    {
        for(int i = iRows; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                if(j <= i)
                    System.out.print(i+" ");
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