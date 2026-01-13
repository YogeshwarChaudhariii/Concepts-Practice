// Find character is capital or small

#include<iostream>
using namespace std;

int main()
{
    char iNo;

    cout<<"Enter a number"<<endl;
    cin>>iNo;

    if ((iNo >= '0') && (iNo <= '9'))
    {
        cout<<iNo<<" is a number"<<endl;
    }
    else
    {
        cout<<"Enter valid number";
    }
    
    return 0;
}