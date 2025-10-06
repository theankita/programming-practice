#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements: \n";

    cin>>length;

    Arr = new int [length];
    if(Arr==NULL)
    {
        cout<<"Unable to allocate memory\n";
    }
    else
    {
        cout<<"Memory gets successfully allocated";
    
    }
    //Use the memory 
    //Step3: Free the memory
    //delete Arr;
    delete [] Arr;

    return 0;
}