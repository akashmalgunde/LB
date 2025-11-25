class Hello
{
    public static void main(String[] args) 
    {
        int iSec = 60;

        int iMin = iSec / 60;
        int iHour = iSec / 3600;
        iSec = iSec % 60;

        System.out.println(iHour);

        System.out.println(iMin);

        System.out.println(iSec);

        


     }
}
