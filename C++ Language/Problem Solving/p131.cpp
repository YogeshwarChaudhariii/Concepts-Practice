// Print numbers from 1 to N using recursion.

#include<iostream>
using namespace std;

void Display(int n)
{

    if (n == 10)
    {
        cout<<"10"<<endl;
        return;
    }

    cout<<n<<" ";

    Display(n + 1);
    
}

int main()
{
    Display(1);


    return 0;
}