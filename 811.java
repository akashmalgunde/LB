class Stack
{
    int iTop;
    int iSize;
    int []Arr;

    Stack(int iSize)
    {
        this.iSize = iSize;
        Arr = new int[iSize];
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

    void push(int iElement)
    {
        if(isFull() == true)
        {
            System.out.println("Stack is overflow");
            return;
        }
        Arr[++iTop] = iElement;
    }

    int pop()
    {
        if(isEmpty() == true)
        {
            System.out.println("Stack is underflow");
            return iTop;
        }

        return Arr[iTop--];
        
    }

    int peek()
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
        Stack sobj = new Stack(6);

        sobj.push(25);
        sobj.push(35);
        sobj.push(45);

        sobj.Display();

        System.out.println(sobj.pop());

        sobj.Display();

        System.out.println(sobj.peek());

        System.out.println(sobj.isEmpty());

        System.out.println(sobj.isFull());

        System.out.println(sobj.checkAny(1));


        


    }
}