// Accept number from user and display below pattern.

/*
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
*/

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    for (int i = 1; i <= iNo; i++)
    {
        cout<<i<<" "<<"# ";
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