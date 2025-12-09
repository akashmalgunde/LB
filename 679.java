class Date
{
    private int iday;
    private int iMonth;
    private int iYear;
    private String dow;

    public Date()
    {
        this.iday = 22;
        this.iMonth = 12;
        this.iYear = 2025;
        this.dow = "Saturday";

    }
    

    public void Display()
    {
        System.out.println(this.iday);
        System.out.println(this.iMonth);
        System.out.println(this.iYear);
        System.out.println(this.dow);
    }

}

class TestDate
{
    public static void main(String args[])
    {
        Date dobj = new Date();

        dobj.Display();


        Date dobj1 = new Date();

        dobj1.Display();

    




    }
} 
