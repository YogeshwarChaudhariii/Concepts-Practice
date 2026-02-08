// Accept number from user and display below pattern.

/*
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    for (int i = 1; i <= iNo; i++)
    {
        cout<<"# "<<i<<" * ";
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