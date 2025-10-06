#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x;

        Demo()
        {
            this->i = 0;
            this->j = 0;
        }

        Demo(int a, int b)
        {
            this->i = a;
            this->j = b;
        }

        void Fun() //
        {
            cout<<"Inside Fun\n";
            cout<<"Value of i is:"<< this->i <<"\n";
            cout<<"Value of j is:"<< this->j <<"\n";
            cout<<"Value of x is:" << x << "\n";
        }

        static void Gun()   //
        {
            cout<<"Inside Gun\n";
            //cout<<i<<"\n"; NA
            //cout<<j<<"\n"; NA
            cout<<x<<"\n"; 
        }

};

int Demo :: x = 11;

int main()
{

    Demo obj(10,20);
    obj.Fun();
    obj.Gun(); // Demo :: Gun 

    cout<< "Size of obj is: "<< sizeof(obj)<<"\n";

    return 0;
}