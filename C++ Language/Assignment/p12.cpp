// Write a program which accept number from user and print even factors of that number.

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

    for (int i = 1; i <= iNo / 2; i++)
    {
        if (i % 2 == 0)
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