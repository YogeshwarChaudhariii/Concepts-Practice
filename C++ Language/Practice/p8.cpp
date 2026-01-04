// Print 5 times Jay Ganesh... 

#include<iostream>
using namespace std;

void Display(int iValue)
{
    int i = 0;

    for ( i = 0; i < iValue; i++)
    {
        cout<<"Jay Ganesh\n";
    }
}

int main()
{
    int iNo = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    Display(iNo);
    
    return 0;
}