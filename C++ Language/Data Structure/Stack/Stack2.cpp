// Stack using Linked List

#include<iostream>
#include<list>
using namespace std;

class List
{
    list<int> ll;  

    public:

        void push(int val)      // Add element in stack
        {
            ll.push_front(val);
        }

        void pop()              // Delete element in stack
        {
            ll.pop_front();
        }

        int top()
        {
            return ll.front();
        }

        bool empty()        // Check stack is empty or not
        {
            return ll.size() == 0;
        }
};

int main()
{
    List llobj;

    llobj.push(11);
    llobj.push(21);
    llobj.push(51);

    while (!llobj.empty())       // Print all elements
    {
        cout<<llobj.top()<<" ";      // Print top element
        llobj.pop();                 // delete top element
    }
    cout<<endl;     // 51 21 11


    return 0;
}