#include<iostream>
using namespace std;

class Demo
{
    public:
        int i, j, k;
        static int x;

        Demo()
        {
            cout<<"Inside constructor"<<endl;
            cout<<i<<"\t"<<j<<"\t"<<k<<endl;
        }

        void Display()
        {
            cout<<"Inside Display"<<endl;
            cout<<i<<"\t"<<j<<"\t"<<k<<endl;
        }

        static void Help()
        {
            cout<<"Inside help"<<endl;
        }
};

int main()
{
    Demo::Help();
    cout<<"Value of X is: "<<Demo::x<<endl;

    Demo dobj1, dobj2;

    dobj1.Display();
    dobj2.Display();

    cout<<"Value of i in dobj1 is: "<<dobj1.i<<endl;
    cout<<"Value of i in dobj2 is: "<<dobj2.i<<endl;

    dobj1.Help();           // Demo::Help();
    cout<<"Value of static X is: "<<dobj1.x<<endl;      //Demo::x;

    return 0;
}
