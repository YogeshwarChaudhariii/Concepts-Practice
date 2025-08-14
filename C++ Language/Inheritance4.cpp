// Hierarchal Inheritance

#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;
        Base()
        {
            cout<<"Base Constructor"<<endl;
        }
        ~Base()
        {
            cout<<"Base Destructor"<<endl;
        }
};

class Derived1 : public Base
{
    public:
        int k, l;
        Derived1()
        {
            cout<<"Derived1 Constructor"<<endl;
        }
        ~Derived1()
        {
            cout<<"Derived1 Destructor"<<endl;
        }
};

class Derived2 : public Base
{
    public:
        int m;
        Derived2()
        {
            cout<<"Derived2 Constructor"<<endl;
        }
        ~Derived2()
        {
            cout<<"Derived2 Destructor"<<endl;
        }
};

int main()
{
    Base bobj;
    Derived1 dobj1;
    Derived2 dobj2;

    cout<<"Size of Base class is: "<<sizeof(bobj)<<endl;
    cout<<"Size of Derived1 class is: "<<sizeof(dobj1)<<endl;
    cout<<"Size of Derived2 class is: "<<sizeof(dobj2)<<endl;


    return 0;
}