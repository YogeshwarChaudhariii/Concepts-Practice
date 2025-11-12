/*
Constructor in Inheritance
Create a base class Person with a constructor that takes name as a parameter.
Create a derived class Employee that also takes salary as a parameter 
and passes the name to the base class constructor.
*/

#include<iostream>
using namespace std;

class Person
{
    public:
        Person(string name)
        {
            cout<<"Name is: "<<name<<endl;
        }
};

class Employee : Person
{
    public:
        Employee(string name, double salary) : Person(name)
        {
            cout<<"Salary is: "<<salary<<endl;
        }
};

int main()
{
    Employee eobj("Yogeshwar", 65000);

    return 0;
}
