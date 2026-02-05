// Accept one number from user and print that number of * on screen

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo < 0)            // Updater
    {
        iNo = -iNo;
    }
    
    for (int i = 0; i < iNo; i++)
    {
        cout<<"*"<<endl;
    }
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Display(iValue);


    return 0;
}