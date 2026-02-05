// Write a program which accepts N from user and print all odd numbers up to N.

/*
Input : 18
Output : 1 3 5 7 9 11 13 
*/

#include<iostream>
using namespace std;

void OddDisplay(int iNo)
{
    for (int i = 0; i < iNo; i++)
    {
        if (i % 2 != 0)
        {
            cout<<i<<endl;
        }
        
    }
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number"<<endl;
    cin>>iValue;

    OddDisplay(iValue);

    return 0;
}