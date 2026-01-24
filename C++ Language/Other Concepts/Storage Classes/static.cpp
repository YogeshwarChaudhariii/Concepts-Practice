/*
Value persists between function calls
Stored in data segment
Default value: 0
Two usages:
a) Static Local Variable
Scope: local
Lifetime: entire program

b) Static Global Variable
Scope limited to same file
Not accessible in other files
*/

#include<iostream>
using namespace std;

static int No1 = 11;

void Display()
{
    static int No2 = 21;
    cout<<"Local static: "<<No2<<endl;
}

int main()
{
    cout<<"Global static: "<<No1<<endl;
    Display();

    return 0;
}
