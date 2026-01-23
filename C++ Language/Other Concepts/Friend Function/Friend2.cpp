#include<iostream>
using namespace std;

class Y;

class X
{
    private:
        int A;

    public:
        X(int a)
        {
            A = a;
        }

    friend void Max(X, Y);
};

class Y
{
    private:
        int B;

    public:
        Y(int b)
        {
            B = b;
        }

    friend void Max(X, Y);
};

void Max(X xobj, Y yobj)
{
    if (xobj.A > yobj.B)
    {
        cout<<"A is greater"<<endl;
    }
    else
    {
        cout<<"B is greater"<<endl;
    }
}

int main()
{

    X a(10);
    Y b(20);

    Max(a, b);

    return 0;
}
