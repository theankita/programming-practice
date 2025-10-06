#include<iostream>

using namespace std;

class Base
{
    public:
    int i,j;

    void fun()
    {
        cout<<"Inside base fun.";
    }
};

class Derived : public Base

{
    public:
    int x;

    void gun()
    {
        cout<<"Inside Gun.";
    }
};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Base class object: "<<sizeof(bobj)<<"\n";
    cout<<"Derived class object: "<<sizeof(dobj)<<"\n";

    return 0;

}