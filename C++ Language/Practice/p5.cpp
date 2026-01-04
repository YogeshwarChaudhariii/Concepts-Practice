// Accept no from user and check its even or odd

#include<iostream>
using namespace std;

bool EvenOdd(int iValue)
{
    if (iValue % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo1 = 0;
    int iBool = false;

    cout<<"Enter a number: "<<endl;
    cin>>iNo1;

    iBool = EvenOdd(iNo1);

    if (iBool == true)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    
    
    cout<<iBool;


    return 0;
}