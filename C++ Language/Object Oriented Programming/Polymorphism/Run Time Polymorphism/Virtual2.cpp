/*
virtual will overwrite defualt behaviour

Without virtual it will display Base class Display function (we points dobj but it will display base)
With vrtual it will display Derived class Dsiplay function (we points dobj and it will display derived)
*/

#include<iostream>
using namespace std;

class Base
{
    public:
        int var_base = 1;
        virtual void Display()
        {
            cout<<"1 Displaying Base class variable var_base: "<<var_base<<endl;
        }
};

class Derived : public Base
{
    public:
        int var_derived = 2;
        void Display()
        {
            cout<<"2 Displaying Base class variable var_base: "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_base: "<<var_derived<<endl;
        }
};

int main()
{
    Base *bptr;

    Base bobj;
    Derived dobj;

    bptr = &dobj;
    bptr->Display();

    return 0;
}
