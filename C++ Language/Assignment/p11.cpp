// Write a program which accept one number from user and print that number of even numbers on screen.

/*
Input : 7
Output: 2 4 6 8 10 12 14
*/

#include<iostream>
using namespace std;

void Display()
{
    int iNo1 = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo1;

    if (iNo1 < 0)
    {
        return;
    }
    
    for (int i = 1; i <= iNo1; i++)
    {
        cout<<i * 2<<" ";
    }
}

int main()
{
    Display();


    return 0;
}