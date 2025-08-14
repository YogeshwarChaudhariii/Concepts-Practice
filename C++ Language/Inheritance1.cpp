// Single Level Inheritance

#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;
        Base()
        {
            cout<<"Base Constrctor"<<endl;
        }
};

class Derived : public Base
{
    public:
        int k;
        Derived()
        {
            cout<<"Derived Constructor"<<endl;
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of Base class is: "<<sizeof(bobj)<<endl;
    cout<<"Size of Derived class is: "<<sizeof(dobj)<<endl;


    return 0;
}