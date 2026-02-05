// Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.

#include<iostream>
using namespace std;

void Display(int iNo)
{
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
    int iValue = 0;

    cout<<"Enter a numebr: "<<endl;
    cin>>iValue;

    Display(iValue);


    return 0;
}