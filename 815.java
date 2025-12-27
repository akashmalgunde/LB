class Arithmetic
{
    int Addition()
    {
        return (10+20);
    }

    void Addition(int a)
    {
        System.out.println(a + 20);
    }

    void Addition(double d)
    {
        System.out.println(20.5 + d);
    }
}

class Test
{
    public static void main(String args[])
    {
       Arithmetic aboj = new Arithmetic();

       System.out.println(aboj.Addition());

       aboj.Addition(10);

       aboj.Addition(20.5);


    }
    
}
