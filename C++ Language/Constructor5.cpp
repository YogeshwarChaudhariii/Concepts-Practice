//Copy Constructor

#include<iostream>
using namespace std;

class Demo
{
    public:
    int iNo1, iNo2;

    Demo()
    {
        cout<<"Inside default constructor"<<endl;
        this->iNo1 = 0;
        this->iNo2 = 0;
    }

    Demo(int A, int B)
    {
        cout<<"Inside paramterised constructor"<<endl;
        this->iNo1 = A;
        this->iNo2 = B;
    }

    Demo(Demo &dref)
    {
        cout<<"Inside copy constructor"<<endl;
        this->iNo1 = dref.iNo1;
        this->iNo2 = dref.iNo2;
    }
};

int main()
{
    Demo dobj1;
    Demo dobj2(10, 11);
    Demo dobj3(dobj2);

    cout<<dobj1.iNo1<<"\t"<<dobj1.iNo2<<"\n";
    cout<<dobj2.iNo1<<"\t"<<dobj2.iNo2<<"\n";
    cout<<dobj3.iNo1<<"\t"<<dobj3.iNo2<<"\n";


    return 0;
}