class Date
{
    int iDay;
    int iMonth;
    int iYear;


    void Display()
    {
        System.out.println("For the object:"+this);
        System.out.println(this.iDay);
        System.out.println(this.iMonth);
        System.out.println(this.iYear);
        System.out.println();
    }
}

class TestArr
{
    public static void main(String args[])
    {
        Date[] d = new Date[5];

        for(int i = 0; i < d.length; i++)
            System.out.println(d[i]);

        System.out.println();

        for(int i = 0; i < d.length; i++)
            d[i] = new Date();

        for(int i = 0; i < d.length; i++)
            System.out.println(d[i]);

        for(int i = 0; i < d.length; i++)
            d[i].Display();
    }
}