class A
{
    char ch;

    void Display()
    {
        System.out.println(this.ch);
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
