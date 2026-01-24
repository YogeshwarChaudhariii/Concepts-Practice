#include<iostream>
using namespace std;

void ExamTime(int iValue)
{
    if (iValue == 1)
    {
        cout<<"Your exam is at 9 AM"<<endl;
    }
    else if (iValue == 2)
    {
        cout<<"Your exam is at 10 AM"<<endl;
    }
    else if (iValue == 3)
    {
        cout<<"Your exam is at 11 AM"<<endl;
    }
    else if (iValue == 4)
    {
        cout<<"Your exam is at 12 NOON"<<endl;
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
}

int main()
{
    int iStd = 0;

    cout<<"Enter your standard: "<<endl;
    cin>>iStd;

    ExamTime(iStd);


    return 0;
}