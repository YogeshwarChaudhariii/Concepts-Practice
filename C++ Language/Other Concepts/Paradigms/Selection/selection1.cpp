#include<iostream>
using namespace std;

int main()
{
    int iMarks = 0;

    cout<<"Enter your marks: "<<endl;
    cin>>iMarks;

    if (iMarks < 35)
    {
        cout<<"You are fail"<<endl;
    }
    else
    {
        cout<<"Your Pass"<<endl;
    }
    
    

    return 0;
}
