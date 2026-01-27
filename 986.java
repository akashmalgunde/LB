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
        Pattern p = new Pattern(4);

        p.display();
    }
}
