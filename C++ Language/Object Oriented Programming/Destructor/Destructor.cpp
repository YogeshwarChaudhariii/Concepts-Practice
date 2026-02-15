/*
Destructor is opposite of constructor.
Destructor will deallocate the object memory. 
Compiler will automatically call destructor.
it will only deallocate static memory allocation for that will use delete keyword.
to delete allocated memory of ptr will use delete ptr; (its not delete ptr it will delete allocated memory of ptr)
Desrtuctor has the same name of a class.
*/

#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;  //Allocate memory with new      
    }
    
    //Destructor
    ~Student()
    {
        cout << "Destructor Deleted everything";
        delete cgpaPtr;     // delete allocated memory of the cgpaptr pointer
    }

    void getInfo()
    {
        cout<< "Name " << name << endl;
        cout << "CGPA " << *cgpaPtr << endl;
    }
};

int main()
{   
    Student s1("Yogeshwar",8.9);
    s1.getInfo();
    // firstly object will print after that object works complete destructor will delete the allocated memory.


    return 0;
}
