// Accept no from user and check its even or odd

#include<iostream>
using namespace std;

void EvenOdd(int iValue)
{
    if (iValue % 2 == 0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"False";
    }
}

int main()
{
    int iNo1 = 0;
    int iBool = false;

    cout<<"Enter a number: "<<endl;
    cin>>iNo1;

    EvenOdd(iNo1);

    return 0;
}