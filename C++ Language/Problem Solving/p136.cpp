// Find power of a number (xⁿ) using recursion
// 4 = 4 * 4 * 4 * 4 = 256

#include<iostream>
using namespace std;

int Power(int x, int n)
{
    if(n == 0)        
    {
        return 1;
    }

    return x * Power(x, n - 1);
}

int main()
{
    int result = Power(4, 4);
    cout << "Power is: " << result << endl;

    return 0;
}
