// Print Hello 5 times... O/P hell.o 1; hello2; hello3...

#include<iostream>
using namespace std;

void Display(int iValue)
{
    for (int i = 1; i <= iValue; ++i)
    {
        cout<<"Hello "<<i<<endl;
    }
    
}
int main()
{
    int iNo = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iNo;

    Display(iNo);

    return 0;
}