// Hierarchical inheritance
// Parent
//   |
// Child  
// Child
// Both parents are inherit to the child

#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;
};

class Student : public Person
{
    public:
    int rollNo;
};

class Teacher : public Person
{
    public:
    string subject;
};


int main()
{   
    Teacher t1;
    
    t1.name = "Yogeshwar";
    t1.subject = "C++";

    cout << t1.name << endl;
    cout << t1.subject << endl;

    return 0;
}
