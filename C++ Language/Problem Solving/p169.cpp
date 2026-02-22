// Check Small

#include<iostream>
using namespace std;

void ChkSmall(char c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        cout<<c<<" is small character"<<endl;
    }
    else
    {
        cout<<c<<" is not small character"<<endl;
    }
    
    
}

int main()
{
    char ch = '\0';

    cout<<"Enter a character: "<<endl;
    cin>>ch;

    ChkSmall(ch);

    return 0;
}