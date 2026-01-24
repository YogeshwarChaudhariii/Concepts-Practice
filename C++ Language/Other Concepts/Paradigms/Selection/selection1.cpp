#include<iostream>
using namespace std;

void Display(int iValue)
{
    if (iValue < 35)
    {
        cout<<"Fail"<<endl;
    }
    else
    {
        cout<<"Pass"<<endl;
    }
}

int main()
{
    int iMarks = 0;

    cout<<"Enter your marks: "<<endl;
    cin>>iMarks;

    Display(iMarks);

    
    cout<<"End of application";
    

    return 0;
}
