// Accept number from user and display below pattern.

/*
Input : 5
Output : A B C D E
*/

#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    char ch = 'A';

    for (int i = 0; i < iNo; i++, ch++)
    {
        cout<<ch<<endl;
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