// Accept one number and check whether it is divisible by 5 or not. 

#include<iostream>
using namespace std;

void Divisible()
{
    int iNo = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    if (iNo % 5 == 0)
    {
        cout<<iNo<<" is divisible by 5"<<endl;
    }
    else
    {
        cout<<iNo<<" is not divisible by 5"<<endl;
    }
}

int main()
{
    Divisible();

    return 0;
}