// Accept one number from user and print that number of * on screen. 

#include<iostream>
using namespace std;

void Display()
{
    int i = 0, iNo = 0;

    cout<<"Enter a number that you want to print *: "<<endl;
    cin>>iNo;

    for (i = 0; i < iNo; i++)
    {
        cout<<"*"<<endl;
    }
}

int main()
{
    Display();

    return 0;
}