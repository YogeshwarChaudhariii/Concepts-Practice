/*
Constructor Calling Order
Create a base class A and derived class B. 
Both should have constructors that print a message. 
Create an object of B and observe the order of constructor calls.
*/

#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"A constructor"<<endl;    
    }
};

class B : public A
{
    public:
    B()
    {
        cout<<"B constructor"<<endl;    
    }
};

int main()
{
    B bobj;


    return 0;
}
