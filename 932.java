import java.util.Scanner;

class Pattern
{
    int iRows;

    public Pattern(int iRows)
    {
        this.iRows = iRows;
    }

    void Display()
    {
        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= iRows; j++)
            {
                if(i == 1 || i == iRows|| j == 1 || j == iRows)
                {
                    System.out.print("* ");
                }
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}


class Test
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int iRows = 0;

        System.out.println("Enter the no of rows:");
        iRows = sobj.nextInt();

        Pattern pobj = new Pattern(iRows);

        pobj.Display();
    }
}