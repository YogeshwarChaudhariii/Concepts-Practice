// Calculate sum of n number

#include<iostream>
using namespace std;

int Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + Sum(n - 1);
}

int main()
{
    int n = 5, iRet = 0;

    iRet = Sum(n);
    cout<<"Sum of "<<n<<" is: "<<iRet<<endl;

    return 0;
}
