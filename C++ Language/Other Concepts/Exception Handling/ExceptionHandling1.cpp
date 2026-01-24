/*
Exception handling is a mechanism to handle runtime errors so the nromal flow of the program does not crash.

Keywords: try, throw, catch
*/

#include<iostream>
using namespace std;

int main()
{
    int A = 10, B = 0, Div;

    try
    {
        if (B == 0)
        {
            throw B;
        }
        Div = A / B;
        cout<<Div;
        
    }
    catch(int X)
    {
        cout<<"Error: Division by zero"<<endl;       
    }
    
    return 0;
}
