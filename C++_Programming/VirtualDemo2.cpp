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
    Base *bp1 = new Base();         //No Casting
    Derived *dp1 = new Derived();   //No Casting
    Base *bp2 = new Derived();      //Up Casting 
    Derived *dp2 = new Base();      //Down Casting   ERROR

    return 0;
}
