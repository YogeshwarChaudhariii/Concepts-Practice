//Largest number in 3 digits

#include<iostream>
using namespace std;

void LargestNumber(int iValue1, int iValue2, int iValue3)
{
    if ((iValue1 >= iValue2) && (iValue1 >= iValue3))
    {
        cout<<iValue1<<" is greater number"<<endl;
    }
    else if ((iValue2 >= iValue1) && (iValue2 >= iValue3))
    {
        cout<<iValue2<<" is greater number"<<endl;
    }
    else
    {
        cout<<iValue3<<" is greater number"<<endl;
    }
    
}

int main()
{
    int iNo1, iNo2, iNo3;

    cout<<"Enter first number: "<<endl;
    cin>>iNo1;
    cout<<"Enter second number: "<<endl;
    cin>>iNo2;
    cout<<"Enter third number: "<<endl;
    cin>>iNo3;

    LargestNumber(iNo1, iNo2, iNo3);

    return 0;
}