class StackCmd
{
    int iTop;
    String[] sArr;
    int iSize;

    public StackCmd(int iSize)
    {
        this.iSize = iSize;
        sArr = new String[iSize];
        iTop = -1;
    }
    
    boolean isFull()
    {
    	boolean bRet = false;
    	if(iTop == sArr.length-1)
    	{
    		bRet = true;
    	}
    	return bRet;
    }
    
    boolean isEmpty()
    {
    	boolean bRet = false;
    	if(iTop == -1)
    	{
    		bRet = true;
    	}
    	return bRet;
    }

    void push(String s)
    {
        if(isFull() == false)
        	sArr[++iTop] = s;
        
        else
        	System.out.println("is full");
    }
    
    String pop()
    {
    	String sDummy;
    	if(isEmpty() == false)
    	{
    		sDummy = sArr[iTop];
    		iTop--;
    		return sDummy;
    	}
    	
    	return "Nothing in Array";
 
    }
    
    void display()
    {
    	for(int i = 0; i < iTop; i++)
    	{
    		System.out.println(sArr[i]);
    	}
    }
}

class TestStack
{
	public static void main(String args[])
	{
		StackCmd sobj = new StackCmd(5);
		
		sobj.push("Hello World");
        sobj.push("Java");
		sobj.push("Java");
        System.err.println(sobj.pop());;
		sobj.display();
	}
}