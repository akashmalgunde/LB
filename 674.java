class Date
{
    int iday;
    int iMonth;
    int iYear;
    String dow;
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

        System.out.println(dobj.iday);
        System.out.println(dobj.iMonth);
        System.out.println(dobj.iYear);
        System.out.println(dobj.dow);
    }
}