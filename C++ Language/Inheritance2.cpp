// Multi Level Inheritance

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
        ~Base()
        {
            cout<<"Base Destructor"<<endl;
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
        ~Derived()
        {
            cout<<"Derived Destructor"<<endl;
        }
};

class DerivedX : public Derived
{
    public:
        int p, q;
        DerivedX()
        {
            cout<<"DerivedX Constructor"<<endl;
        }
        ~DerivedX()
        {
            cout<<"DerivedX Destructor"<<endl;
        }
};

int main()
{
    Base bobj;
    Derived dobj;
    DerivedX dxobj;

    cout<<"Size of Base class is: "<<sizeof(bobj)<<endl;
    cout<<"Size of Derived class is: "<<sizeof(dobj)<<endl;
    cout<<"Size of DerivedX class is: "<<sizeof(dxobj)<<endl;


    return 0;
}