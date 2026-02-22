// Check Digit

#include<iostream>
using namespace std;

void ChkDgt(char c)
{    
    if ((c >= '0') && (c <= '9'))
    {
        cout<<c<<" is a digit"<<endl;
    }
    else
    {
        cout<<c<<" is not digit"<<endl;
    }
    
    
}

int main()
{
    char ch = '\0';

    cout<<"Enter a digit: "<<endl;
    cin>>ch;

    ChkDgt(ch);

    return 0;
}