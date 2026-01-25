// Accept two numbers from user and display first number in second number of times.

#include<iostream>
using namespace std;

void Display()
{
    int iNo1, iNo2;

    cout<<"Enter a number to print on console: "<<endl;
    cin>>iNo1;

    cout<<"How many times print number: "<<endl;
    cin>>iNo2;

    if (iNo2 < 0)
    {
        return;
    }
    

    for (int i = 0; i < iNo2; i++)
    {
        cout<<iNo1<<endl;
    }
}

int main()
{
    Display();

    return 0;
}