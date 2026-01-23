#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLinearLinkedList
{
    private:
        PNODE first;
        int iCount;

    public:

        SinglyLinearLinkedList()
        {
            this->first = NULL;
            this->iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if (first == NULL)
            {
                first = newn;
            }
            else
            {
                newn->next = first;
                first = newn;
            }

            iCount++;
        }

        void Display()
        {
            while (first != NULL)
            {
                cout<<"| "<<first->data<<" | -> ";
                first = first->next;
            }
            cout<<"NULL"<<endl;
        }

        int Count()
        {
            return iCount;
        }
};

int main()
{
    SinglyLinearLinkedList SLLobj;
    int iRet = 0;

    SLLobj.InsertFirst(51);
    SLLobj.InsertFirst(21);
    SLLobj.InsertFirst(11);
    SLLobj.Display();
    iRet = SLLobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    return 0;
}
