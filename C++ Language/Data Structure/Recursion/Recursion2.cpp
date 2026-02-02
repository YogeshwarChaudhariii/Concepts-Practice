// Print 5 to 1 using recursion

#include<iostream>
using namespace std;

void PrintNumbers(int n)
{
    if (n == 1)     // Base Case
    {
        cout<<"1"<<endl;
        return;
    }
    
    cout<<n<<" ";       // n,   n - 1,  n - 2.... to 1 

    PrintNumbers(n - 1);
    
}

int main()
{
    PrintNumbers(5);


    return 0;
}
