#include<iostream>
using namespace std;

extern int GlobalNumber;    // Declaration (No memory allocated)
extern void Display();

int main()
{
    cout<<"Value of Global Number is: "<<GlobalNumber<<endl;
    Display();

    return 0;
}
