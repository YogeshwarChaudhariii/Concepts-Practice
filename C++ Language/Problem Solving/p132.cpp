// Print numbers from N to 1 using recursion

#include<iostream>
using namespace std;

void Display(int n)
{
    if (n == 1)
    {
        cout<<"1"<<endl;
        return;
    }

    cout<<n<<" ";

    Display(n - 1);
    
}

int main()
{
    Display(10);

    return 0;
}