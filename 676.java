class Date
{
    int iday;
    int iMonth;
    int iYear;
    String dow;

    public Date()
    {
        this.iday = 10;
        this.iMonth = 12;
        this.iYear = 2025;
        this.dow = "Wednesday";
    }

    void Display()
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

        dobj.iday = 8;
        dobj.iMonth = 12;
        dobj.iYear = 2025;
        dobj.dow = "Monday";

        dobj.Display();


        Date dobj1 = new Date();

        dobj1.Display();

        Date dobj2 = new Date(11,12,2025,"Friday");

        dobj2.Display();




    }
} 
