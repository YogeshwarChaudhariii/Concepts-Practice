// Write a program which accept number from user and display its table

/*
Input : 2
Output : 2 4 6 8 10 12 14 16 18 20
Input : 5
Output : 5 10 15 20 25 30 35 40 45 50
Input : -5
Output : 5 10 15 20 25 30 35 40 45 50
*/

#include<iostream>
using namespace std;

void Table(int iNo)
{
    int table = 0;

    for (int i = 1; i <= 10; i++)
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