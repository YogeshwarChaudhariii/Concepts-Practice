// Accept one number from user and print that number of * on screen

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo < 0)            // Updater
    {
        iNo = -iNo;
    }
    
    while (iNo > 0)
    {
        cout<<"*"<<endl;
        iNo--;
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