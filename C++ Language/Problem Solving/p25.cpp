// Write a program which accept N and print first 5 multiples of N. 

/*
Input : 4
Output : 4 8 12 16 20 
*/

#include<iostream>
using namespace std;

void MultipleDisplay(int iNo)
{
    int Mult;

    for (int i = 1; i <= 5; i++)
    {
        Mult = i * iNo; 
        cout<<Mult<<" ";
    }
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number"<<endl;
    cin>>iValue;

    MultipleDisplay(iValue);

    return 0;
}