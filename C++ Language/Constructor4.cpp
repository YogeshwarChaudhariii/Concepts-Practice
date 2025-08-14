/*
Create a class Complex with two constructors:
One with no arguments (sets real=0, imag=0)
One with two arguments (sets real and imag to given values).
Display both objects.
*/

#include<iostream>
using namespace std;

class Complex
{
    public:
    int Set, Imag;

    Complex()
    {
        Set = 0;
        Imag = 0;
    }

    Complex(int A, int B)
    {
        Set = A;
        Imag = B;
    }
};

int main()
{
    Complex cobj1;
    Complex cobj2(10, 11);

    int iRet = 0;

    iRet = cobj1.Set;
    cout<<"Default constrctor Set: "<<iRet<<endl;

    iRet = cobj1.Imag;
    cout<<"Default constrctor Imag: "<<iRet<<endl;

    iRet = cobj2.Set;
    cout<<"Paramterised constrctor Set: "<<iRet<<endl;

    iRet = cobj2.Imag;
    cout<<"Paramterised constrctor Imag: "<<iRet<<endl;


    return 0;
}