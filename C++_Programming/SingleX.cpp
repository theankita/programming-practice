#include<iostream>

using namespace std;

class Base
{
    public:
    int i,j;

    void fun()
    {
        cout<<"Inside base fun.\n";
    }
};

class Derived : public Base

{
    public:
    int x;

    void gun()
    {
        cout<<"Inside Gun.\n";
    }
};
int main()
{
    Base bobj;
    Derived dobj;

    dobj.fun();
    dobj.fun();
    dobj.gun();

    return 0;

}