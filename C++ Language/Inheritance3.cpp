// Multiple Inheritance

#include<iostream>
using namespace std;

class Base1
{
    public:
        int i, j;
        Base1()
        {
            cout<<"Base1 Constructor"<<endl;
        }
        ~Base1()
        {
            cout<<"Base1 Destructor"<<endl;
        }
};

class Base2
{
    public:
        int k;
        Base2()
        {
            cout<<"Base2 Constructor"<<endl;
        }
        ~Base2()
        {
            cout<<"Base2 Destructor"<<endl;
        }
};

class Derived : public Base1, Base2
{
    public:
        int l, m;
        Derived()
        {
            cout<<"Derived Constructor"<<endl;
        }
        ~Derived()
        {
            cout<<"Derived Destructor"<<endl;
        }
};

int main()
{
    Base1 bobj1;
    Base2 bobj2;
    Derived dobj;

    cout<<"Size of Base1 class is: "<<sizeof(bobj1)<<endl;
    cout<<"Size of Base2 class is: "<<sizeof(bobj2)<<endl;
    cout<<"Size of Derived class is: "<<sizeof(dobj)<<endl;




    return 0;
}