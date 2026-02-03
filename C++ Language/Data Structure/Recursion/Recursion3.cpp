// Calculate n factorial using recursion 

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
    int iRet = 0, n = 5;

    iRet = Factorial(5);

    cout<<"Factorial of "<<n<<" is: "<<iRet<<endl;

    return 0;
}
