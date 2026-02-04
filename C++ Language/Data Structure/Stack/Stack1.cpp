// Stack using vectors

#include<iostream>
#include<vector>
using namespace std;

class Stack
{
    vector<int> v;  

    public:

        void push(int val)      // Add element in stack
        {
            v.push_back(val);
        }

        void pop()              // Delete element in stack
        {
            v.pop_back();
        }

        int top()
        {
            return v[v.size() - 1];
        }

        bool empty()        // Check stack is empty or not
        {
            return v.size() == 0;
        }
};

int main()
{
    Stack sobj;

    sobj.push(11);
    sobj.push(21);
    sobj.push(51);

    while (!sobj.empty())       // Print all elements
    {
        cout<<sobj.top()<<" ";      // Print top element
        sobj.pop();                 // delete top element
    }
    cout<<endl;     // 51 21 11


    return 0;
}
