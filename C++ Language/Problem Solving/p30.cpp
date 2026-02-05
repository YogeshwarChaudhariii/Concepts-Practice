// Write a program which accept number from user and display its table in reverse order

/*
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2
Input : 5
Output : 50 45 40 35 30 25 20 15 10 5
Input : -5
Output : 50 45 40 35 30 25 20 15 10 5
*/

#include<iostream>
using namespace std;

void Table(int iNo)
{
    int table = 0;

    for (int i = 10; i >= 1; i--)
    {
        table = i * iNo;
        cout<<iNo<<" * "<<i<<" = "<<table<<endl;
    }
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Table(iValue);


    return 0;
}