// Write a program which accept number from user and display its multiplication of factors.

#include<iostream>
using namespace std;

void Display()
{
    int iNo = 0, iNo2 = 1;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (int i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            iNo2 *= i;
        }
    }
    cout<<iNo2;
}

int main()
{
    Display();

    return 0;
}