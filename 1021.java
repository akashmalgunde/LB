class Pattern
{
    int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    public void display()
    {
        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }

        for(int i = this.iRows - 1; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
                System.out.print("* ");

            System.out.println();
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Pattern p = new Pattern(5);

        p.display();

        Pattern p1 = new Pattern(010);

        p1.display();
    }
}