#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int age;

        void displayInfo()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main()
{
    Student student1;
    student1.name = "Alice";
    student1.age = 20;

    student1.displayInfo();

    return 0;
}


