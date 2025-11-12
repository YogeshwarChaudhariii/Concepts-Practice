/*
Write a C++ class Car with a default constructor that prints "Car object created". 
Create an object of Car inside main() to test it.
*/

#include<iostream>
using namespace std;

class Car
{  
    public: 

    Car()
    {
        cout<<"car object created"<<endl;
    }
};

int main()
{
    Car cobj;


    return 0;
}
