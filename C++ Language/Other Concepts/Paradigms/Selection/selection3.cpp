#include<iostream>
using namespace std;

void ExamTime(int iValue)
{
    switch(iValue)
    {
        case 1:
        cout<<"Your exam is at 9 AM"<<endl;
        break;

        case 2:
        cout<<"Your exam is at 10 AM"<<endl;
        break;

        case 3:
        cout<<"Your exam is at 11 AM"<<endl;
        break;

        case 4:
        cout<<"Your exam is at 12 NOON"<<endl;
        break;

        default:
        cout<<"Inavlid input"<<endl;
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