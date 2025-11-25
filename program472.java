class Demo
{
    public static void checkAge(int iAge)
    {
        if(iAge < 0)
        {
            iAge = -iAge;
        }
        if(iAge < 12)
            System.out.println("Child");

        else if(iAge >= 12 && iAge <= 19)
            System.out.println("Teenager");

        else if(iAge >= 20 && iAge <= 59)
            System.out.println("Adult");

        else
            System.out.println("Senior");
    }
}

class Program472
{
    public static void main(String args[])
    {
        int iAge = -65;

        Demo.checkAge(iAge);
    }
} 
    

