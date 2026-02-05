// Write a program which accept number from user and print its numbers line. 

/*
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4
*/

#include<iostream>
using namespace std;

void Display(int iNo)
{
    for (int i = -iNo; i <= iNo; i++)
    {
        cout<<i<<endl;
    }
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}