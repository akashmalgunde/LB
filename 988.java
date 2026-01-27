class Pattern
{
    int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    void display()
    {
        char ch = '\0';
        for(int i = 1; i <= this.iRows; i++)
        {
            ch = 'A';
            for(int j = 1; j <= i; j++)
            {
                System.out.print((ch++)+" ");
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
