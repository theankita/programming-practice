class Demo
{
    public int i;            //Instance Varible
    static public int j;    //Class Variable

    static 
    {
        System.out.println("Inside stactic block.");
        
        j = 21;
    }

    public Demo()
    {
        System.out.println("Inside constructor.");
        this.i = 11;
      
    }
}

class Blocks
{
    public static void main(String A [] ) 
    {
     System.out.println("Inside main.");

     Demo dobj1 = new Demo();
     Demo dobj2 = new Demo();
     Demo dobj3 = new Demo();

     
    }
}