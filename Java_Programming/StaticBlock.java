class Demo
{
    public int i;            //Instance Varible
    static public int j;    //Class Variable

    static 
    {
        
        j = 21;
    }

    public Demo()
    {
        this.i = 11;
      
    }

    public void fun()           //Instance method 
    {
        System.out.println("fun i : "+this.i);
        System.out.println("fun j : "+Demo.j);
    }
      static public void gun()           //Class method 
    {
        //System.out.println("gun i : "+this.i); //Not Allowed 
        System.out.println("gun j : "+Demo.j);
    }
}

class StaticBlock
{
    public static void main(String A [] ) 
    {
        Demo.gun();

        System.out.println(Demo.j);
        
        Demo dobj = new Demo();

        System.out.println(dobj.i);

        dobj.fun();
    }
}