// Write a program which accept number from user and print numbers till that number. 

/*
Input : 8
Output : 1 2 3 4 5 6 7 8
*/

#include<iostream>
using namespace std;

void Display(int iNo)
{
    for (int i = 1; i <= iNo; i++)
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