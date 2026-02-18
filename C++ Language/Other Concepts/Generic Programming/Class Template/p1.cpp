#include<iostream>
using namespace std;

template <class T>
class Stack
{
    private:
        T *Arr;
        int Top;
        int Size;

    public:
        Stack(int length)
        {
            Size = length;
            Top = -1;
            Arr = new T[Size];
        }

        void Push(T Value)
        {
            if (Top == Size - 1)
            {
                cout<<"Stack is full"<<endl;
                return;
            }
            Arr[++Top] = Value;
        }

        T Pop()
        {
            if (Top == -1)
            {
                cout<<"Stack is empty"<<endl;
                return T();
            }
            return Arr[Top--];
        }

        void Display()
        {
            for (int i = Top; i >= 0; i--)
            {
                cout<<Arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    Stack<int> sobj1(5);

    sobj1.Push(11);
    sobj1.Push(21);
    sobj1.Push(51);
    sobj1.Push(101);

    cout<<"Poped elements are: "<<sobj1.Pop()<<endl;

    Stack<float> sobj2(5);
    sobj2.Push(15.36);
    sobj2.Push(48.12);
    sobj2.Push(69.36);
    sobj2.Display();

    return 0;
}
