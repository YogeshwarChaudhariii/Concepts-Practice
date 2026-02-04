// Stack using stack<> library

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(11);
    s.push(21);
    s.push(51);

    while (!s.empty())       // Print all elements
    {
        cout<<s.top()<<" ";      // Print top element
        s.pop();                 // delete top element
    }
    cout<<endl;     // 51 21 11


    return 0;
}