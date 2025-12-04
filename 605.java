class A
{
    char ch;

    void Display()
    {
        System.out.println((int)ch);
    }

}

class TestA
{
    public static void main(String args[])
    {
        A ref = new A();

        ref.ch = 'A';

        ref.Display();


    }
}
