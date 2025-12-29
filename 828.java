import java.util.*;

class Display
{
    static void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
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
        int iRows = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the no of rows:");

        iRows = sobj.nextInt();

        Display.Display(iRows);

    }
}