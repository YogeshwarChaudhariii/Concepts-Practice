//  Accept one number from user and print that number of * on screen.   (while loop)

#include<iostream>
using namespace std;

void Display()
{
    int i = 0, iNo = 0;

    cout<<"Enter a number to print *: "<<endl;
    cin>>iNo;

    if (iNo < 0)
    {
        return;
    }

    while (i < iNo)
    {
        cout<<"*"<<endl;
        i++;
    }
}

int main()
{
    Display();

    return 0;
}