#include<iostream>
using namespace std;

class Demo
{
    public:
        int i, j;

        Demo()
        {
            cout<<"Inside constructor"<<endl;
        }
        ~Demo()
        {
            cout<<"Inside Destructor"<<endl;
        }
};

int main()
{
    Demo *ptr = NULL;

    ptr = new Demo;

    cout<<"USE"<<endl;

    delete ptr;

    return 0;
}
