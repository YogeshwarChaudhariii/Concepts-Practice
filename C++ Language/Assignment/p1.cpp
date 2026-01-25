// Program to divide two number

#include<iostream>
using namespace std;

class Arithmatic
{
    public:
    float No1, No2, Ans;

        float Divide()
        {
            cout<<"Enter first number: "<<endl;
            cin>>No1;

            cout<<"Enter second number: "<<endl;
            cin>>No2;

            if (No2 > No1)
            {
                return -1;
            }
            

            Ans = No1 / No2;

            cout<<"Division is: "<<Ans;
        }
};

int main()
{
    Arithmatic aobj;

    aobj.Divide();

    return 0;
}
