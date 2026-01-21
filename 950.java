class Pattern
{
    int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    void display()
    {
        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= this.iRows; j++)
            {
                if(j >= i)
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
        Pattern p = new Pattern(5);

        p.display();

        Pattern p1 = new Pattern(15);

        p1.display();
    }
}