#include<iostream>
using namespace std;

class Base
{
     public:
     int i,j;
     void fun()
     {
        cout<<"Inside base fun\n";
     }
         void gun()
     {
        cout<<"Inside base gun\n";
     }
         void sun()
     {
        cout<<"Inside base sun\n";
     }
         void bun()
     {
        cout<<"Inside base bun\n";
     }
};

class Derived: public Base
{
    public:
    int x;

        void gun()
     {
        cout<<"Inside derived gun\n";
     }

         void sun()
     {
        cout<<"Inside derived sun\n";
     }

         void run()
     {
        cout<<"Inside derived run\n";
     }

         void mun()
     {
        cout<<"Inside derived run\n";
     }
};

int main()
{
    
    Base *bp = new Derived();      //Up Casting 
    
    bp -> fun();  //Base Fun 
    bp -> gun();  //Base Gun
    bp -> sun();  //Base Sun
    //bp -> run();  //ERROR
    //bp -> mun();  //ERROR
    bp -> bun();  //Base bun


    return 0;
}
