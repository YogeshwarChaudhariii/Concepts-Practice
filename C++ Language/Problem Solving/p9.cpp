// Accept two numbers from user and display first number in second number of times.

#include<iostream>
using namespace std;

void Display(int iNo1, int iNo2)
{
    if (iNo2 < 0)
    {
        iNo2 = -iNo2;
    }
    
    for (int i = 0; i < iNo2; i++)
    {
        cout<<iNo1<<endl;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue1;

    cout<<"Enter frequency: "<<endl;
    cin>>iValue2;

    Display(iValue1, iValue2);


    return 0;
}