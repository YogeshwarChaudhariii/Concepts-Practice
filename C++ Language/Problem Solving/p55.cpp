// Accept number from user and display below pattern.

/*
Input : 8
Output : 2 4 6 8 10 12 14 16
*/

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    int iTable = 1;

    for (int i = 1; i <= iNo * 2; i++)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;
    
    Pattern(iValue);

    return 0;
}