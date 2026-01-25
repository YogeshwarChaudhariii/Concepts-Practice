// Accept a number from user if number is less than 10 then print “Hello” otherwise print “Demo”. 

#include<iostream>
using namespace std;

void Display()
{
    int iNo = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    if (iNo <= 10)
    {
        cout<<"Hello"<<endl;
    }
    else
    {
        cout<<"Demo"<<endl;
    }
}

int main()
{
    Display();


    return 0;
}