// Write a program which accept number from user and display its factors in decreasing order

#include<iostream>
using namespace std;

void Display()
{
    int iNo = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (int i = iNo / 2; i >= 1; i--)
    {
        if (iNo % i == 0)
        {
            cout<<i<<" ";   
        }
    }
}

int main()
{
    Display();

    return 0;
}