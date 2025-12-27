import java.util.Scanner;

class Stack
{
    int iTop;
    int iSize;
    char []Arr;

    Stack(int iSize)
    {
        this.iSize = iSize;
        Arr = new char[iSize];
        iTop = -1;

    }


    boolean isEmpty()
    {
        boolean bRet = false;
        if(this.iTop == -1)
        {
            bRet = true;
        }
        return bRet;
    }

    boolean isFull()
    {
        boolean bRet = false;
        if(this.iTop == Arr.length - 1)
            bRet = true;

        return bRet;
    }

    void push(char cElement)
    {
        if(isFull() == true)
        {
            System.out.println("Stack is overflow");
            return;
        }
        Arr[++iTop] = cElement;
    }

    char pop()
    {
        if(isEmpty() == true)
        {
            System.out.println("Stack is underflow");
            return '\0';
        }

        return Arr[iTop--];
        
    }

    char peek()
    {
        return Arr[iTop];
    }

    void Display()
    {
        if(this.isEmpty() == false)
            for(int i = 0; i <= iTop; i++)
                System.out.print(Arr[i]+" ");
        else
            System.out.println("No element is there in array");


        System.out.println();
    }

    int checkAny(int iPos)
    {
        if(iPos < 0 || iPos > iTop)
        {   
            return -1;
        }
        return Arr[iPos];
    }
    


}


class Test
{
    public static void main(String args[])
    {
        Stack s = new Stack(25);
        Scanner sobj = new Scanner(System.in);

        String sInput = sobj.nextLine();

        System.out.println(sInput);

        char x = '\0';

        /*(for(int i = 0; i < sInput.length(); i++)
            System.out.print(sInput.charAt(i));*/

        char ch = '\0';
        for(int i = 0; i < sInput.length(); i++)
        {
             ch = sInput.charAt(i);

            if(ch == '(' || ch == '{' || ch == '[')
                s.push(ch);
            if(ch == ')' || ch == '}' || ch == ']')
            {
                x = s.pop();
                System.out.print(ch);
                System.out.println(x);

                if(x == '[' && ch == ']' || x == '(' && ch == ')' || x == '{' && ch == '}' )
                {
                    System.out.println("For the continue");
                    continue;
                }
                else{
                    System.out.println("Not valid");
                    break;
                }
            }

        }

        if(s.isEmpty() == true)
                System.out.println("Valid");
    }
}
