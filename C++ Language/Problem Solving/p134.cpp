// Print multiplication table of a number using recursion.

#include<iostream>
using namespace std;

void MultiplicationTable(int n, int iCount)
{
    if (iCount > 10)
    {
        return;
    }
    
    cout<<n<<" * "<<iCount<<" = "<<n * iCount<<endl;

    MultiplicationTable(n, iCount + 1);
}

int main()
{
    MultiplicationTable(2, 1);

    return 0;
}