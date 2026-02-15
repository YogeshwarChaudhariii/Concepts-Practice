#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;

        virtual void fun()      //1000
        {
            cout<<"Base fun"<<endl;
        }

        virtual void gun()      //2000
        {
            cout<<"Base gun"<<endl;
        }

        virtual void sun()      //3000  
        {
            cout<<"Base sun"<<endl;
        }

        virtual void run()      //4000
        {
            cout<<"Base run"<<endl;
        }
};

class Derived : public Base
{
    public:
        int x, y;

        void fun()
        {
            cout<<"Derived fun"<<endl;
        }

        virtual void gun()
        {
            cout<<"Derived gun"<<endl;
        }

        virtual void run()
        {
            cout<<"Derived run"<<endl;
        }

        virtual void mun()
        {
            cout<<"Derived mun"<<endl;
        }
};

int main()
{
    Base *bp;
    Derived dobj;

    bp = &dobj;

    bp->fun();              // Derived fun
    bp->gun();              // Derived gun
    bp->sun();              // Derived sun
    bp->run();              // Derived run
    // bp->mun();           // Base has no member of mun (Error)


    return 0;
}
