#include<iostream>

using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }  
         void fun() 
        {
            cout<<i<<"\n"; //Allowed
            cout<<j<<"\n"; //Allowed
            cout<<k<<"\n"; //Allowed
        }    
};

class Derived : public Base
{
    public:
        void Display()
        {
            cout<<i<<"\n";  //Allowed
            cout<<j<<"\n";  //Not Allowed - Error
            cout<<k<<"\n";  //Allowed
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n"; //Allowed
    cout<<bobj.j<<"\n"; //Not Allowed - Error
    cout<<bobj.k<<"\n"; //Not Allowed - Error

    cout<<dobj.i<<"\n"; //Allowed
    cout<<dobj.j<<"\n"; //Not Allowed - Error
    cout<<dobj.k<<"\n"; //Not Allowed - Error

    dobj.fun();         //Allowed
    dobj.Display();     //Allowed


    return 0;

}