class Hello
{
    public int i;

    public Hello(int no)
    {
        System.out.println("Inside Hello Constructor");
        this.i=no+1;
    }

    public void Display()
    {
        System.out.println("Inside Hello Display");
    }
}

class Demo extends Hello
{
    public int i;

    public Demo(int a)
    {
        super(a);   //First Use
        System.out.println("Inside Demo Constructor");
        this.i = a;
    }

    public void Display()
    {
        int i = 0;
        System.out.println("Inside display " + i);  //0
        System.out.println("Inside display " +this.i);  //51
        System.out.println("Inside display " +super.i); //52 //Second Use
        super.Display();  //Third Use     
}
}

class SuperDemo
{
    public static void main (String A[])
    {
        Demo dobj = new Demo(51);
        dobj.Display();
        
    }
}