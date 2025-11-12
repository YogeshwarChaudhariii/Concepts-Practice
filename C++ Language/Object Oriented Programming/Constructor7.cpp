/*
Write a class Student with attributes name and marks. Create your own copy constructor 
to copy the data from one object to another.
*/

#include<iostream>
using namespace std;

class Student
{
    public:
    string Name;
    float Marks;

    Student(string N, float M)
    {
        this->Name = N;
        this->Marks = M;
    }

    Student(Student &sref)
    {
        this->Name = sref.Name;
        this->Marks = sref.Marks;
    }
};

int main()
{
    Student sobj1("Yogeshwar", 85.95);
    Student sobj2(sobj1);

    cout<<"Student name is: "<<sobj2.Name<<" and Marks: "<<sobj2.Marks<<endl;


    return 0;
}
