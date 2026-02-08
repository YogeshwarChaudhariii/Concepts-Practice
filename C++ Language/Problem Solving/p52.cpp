// Accept number from user and display below pattern.

/*
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    for (int i = iNo; i >= 1; i--)
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