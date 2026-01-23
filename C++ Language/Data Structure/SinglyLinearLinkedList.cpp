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
        PNODE temp;
        int iCount;

    public:

        SinglyLinearLinkedList()
        {
            this->first = NULL;
            this->temp = NULL;
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

        void InsertLast(int no)
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
                temp = first;

                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newn;
            }
            iCount++;
        }

        void DeleteFirst()
        {
            if (first == NULL)
            {
                return;
            }
            else
            {
                temp = first;

                first = (first)->next;

                delete(temp);
            }  
            iCount--;
        }

        void Display()
        {
            temp = first;

            while (temp != NULL)
            {
                cout<<"| "<<temp->data<<" | -> ";
                temp = temp->next;
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

    SLLobj.InsertLast(101);
    SLLobj.InsertLast(111);
    SLLobj.InsertLast(121);
    SLLobj.Display();
    iRet = SLLobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    SLLobj.DeleteFirst();
    SLLobj.Display();
    iRet = SLLobj.Count();
    cout<<"Number of elements are: "<<iRet;


    return 0;
}
