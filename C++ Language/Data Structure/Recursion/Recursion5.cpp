// Fibonacci Series

#include<iostream>
using namespace std;

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return Fibonacci(n - 1) + Fibonacci(n - 2);
    
}

int main()
{
    int Target = 6;
    int iRet = 0;

    iRet = Fibonacci(Target);

    cout<<iRet<<endl;


    return 0;
}