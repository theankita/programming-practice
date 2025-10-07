class Demo
{
    public int i;
    public static int j;

    static 
    {
        j = 22;
    }

    public Demo()
    {
        this.i = 11;    //First use 
        System.out.println("Inside default");
    }

    public Demo(int a)
    {
        this(); //Second use
        System.out.println("Inside parameterised");
    }

    public void Display()
    {
        System.out.println("Inside display " +this.i); //Third use 
    }
}

class ThisDemo
{
    public static void main (String A[])
    {
        Demo dobj = new Demo(51);
        dobj.Display();
    }
}