/*
Polymorphism
It is made up of two words 1) Poly(multiple) 2) morph(Forms)
Types of polymorphism:
1) Compile time(Static Polymorphism): Function Overloading and Operator Overloading
2) Run time: Funtion Overriding (implemented using virtual functions)
*/

#include<iostream>
using namespace std;

class Addition
{
    public:
    void Add(int iNo1, int iNo2)
    {
        int Ans = 0;

        Ans = iNo1 + iNo2;
        cout<<"Integer sum is: "<<Ans<<endl;
    }

    void Add(double dNo1, double dNo2)
    {
        double Ans = 0;

        Ans = dNo1 + dNo2;
        cout<<"Double sum is: "<<Ans<<endl;
    }
};

int main()
{
    Addition Aobj;

    Aobj.Add(11, 21);
    Aobj.Add(11.45, 21.45);


    return 0;
}
