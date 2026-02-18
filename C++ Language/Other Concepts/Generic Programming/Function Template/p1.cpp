// Generic Function using Template

/*  
One function works for all data type
This would work even for user defined types
if operator '>' is overloaded
*/

#include<iostream>
using namespace std;

template <class T>
T Add(T iNo1, T iNo2)
{
    return iNo1 + iNo2;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter first number: "<<endl;
    cin>>iValue1; 

    cout<<"Enter second number: "<<endl;
    cin>>iValue2;
    
    iRet = Add(iValue1, iValue2);

    cout<<"Addition is: "<<iRet;

}
