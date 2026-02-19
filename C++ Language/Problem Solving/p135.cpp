// Find factorial of a number using recursion.

#include<iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    return n * Factorial(n - 1);
}

int main()
{
    int iRet = 0;

    iRet = Factorial(5);
    cout<<"Factorial is: "<<iRet<<endl;


    return 0;
}