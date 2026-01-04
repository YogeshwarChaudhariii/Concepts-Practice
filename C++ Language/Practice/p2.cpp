//Problem Statement : Accept 2 values from user and perform the addition...

#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2)
{
    int iRet = 0;

    iRet = iValue1 + iValue2;
    return iRet;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iSum = 0;

    cout<<"Enter first number: "<<endl;
    cin>>iNo1;

    cout<<"Enter second umber: "<<endl;
    cin>>iNo2;

    iSum = Addition(iNo1, iNo2);

    cout<<"Addition is: "<<iSum;

    return 0;
}