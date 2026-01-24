#include<iostream>
using namespace std;

void Divide(int A, int B)
{
    int Div;

    if (B == 0)
    {
        throw B;
        Div = A / B;
        cout<<"Result: "<<Div<<endl;
    }
}

int main()
{
    try
    {
        Divide(10, 0);
    }
    catch(int X)
    {
        cout<<"Division by zero not allowed"<<endl;
    }
    


    return 0;
}
