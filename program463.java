class Operation
{
    public static void PerformOperation(char ch)
    {
        int iNo1 = 25;
        int iNo2 = 25;
        if(ch == '+')
            System.out.printf("%d is addition of %d and %d\n",iNo1+iNo2,iNo1,iNo2);
        else if(ch == '-')
            System.out.printf("%d is subtraction of %d and %d\n",iNo1-iNo2,iNo1,iNo2);
        else if(ch == '*')
            System.out.printf("%d is Multiplication of %d and %d\n",iNo1*iNo2,iNo1,iNo2);
        else if(ch == '/')
            System.out.printf("%d is Division of %d and %d\n",iNo1/iNo2,iNo1,iNo2);
        else if(ch == '%')
            System.out.printf("%d is Modulo of %d and %d\n",iNo1%iNo2,iNo1,iNo2);
        else
            System.out.println("Invalid choise");
    }
}

class program463 
{

    public static void main(String args[])
    {
        char ch = '-';

        Operation.PerformOperation(ch);

    }
    
}
