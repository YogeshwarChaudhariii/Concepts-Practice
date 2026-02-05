/*
Write a program which accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large.

Input : 75
Output : Medium 
*/

#include<iostream>
using namespace std;

void Number(int iNo)
{
    if (iNo <= 50)
    {
        cout<<"Small"<<endl;
    }
    else if (iNo >= 50 && iNo <= 100)
    {
        cout<<"Medium"<<endl;
    }
    else
    {
        cout<<"Large"<<endl;
    }

}

int main()
{
    int iValue = 0;

    cout<<"Enter a number"<<endl;
    cin>>iValue;

    Number(iValue);


    return 0;
}