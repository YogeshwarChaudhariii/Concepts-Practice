// Accept number from user and check whether number is even or odd.

#include<iostream>
using namespace std;

void Display()
{
    int iNo = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    if (iNo % 2 == 0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}

int main()
{
    Display();

    return 0;
}