#include<iostream>
using namespace std;

class Demo
{
    private:
        string Name;
    
    public:

        Demo()
        {
            cout<<"Default constructor"<<endl;
        }

        Demo(string str)
        {
            this->Name = str;
            cout<<"Parameterized constructor"<<endl;
        }
};

int main()
{
    Demo dobj1();
    Demo dobj2("Yogeshwar");

    return 0;
}
