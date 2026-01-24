/*
auto (Automatic Storage Class)
Default storage class for local variables
Stored in stack memory
Scope: local to block
Lifetime: till block execution
Default value: garbage
*/

#include<iostream>
using namespace std;

auto iValue = 12.25;       // Global member

void AutoClass()
{
    auto No = 11;       // same as: int No = 11;
    cout<<"Local member: "<<No<<endl;
}

int main()
{
    cout<<"Global member: "<<iValue<<endl;
    AutoClass();
    
    return 0; 
}
