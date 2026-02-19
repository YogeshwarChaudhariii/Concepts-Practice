// Find sum of first N natural numbers using recursion.

#include<iostream>
using namespace std;

int Display(int n)
{
    if (n == 1)
    {
        return 0;
    }

    return n + Display(n - 1);
}

int main()
{
    int iRet = 0;

    iRet = Display(10);
    cout<<iRet<<endl;

    return 0;
}