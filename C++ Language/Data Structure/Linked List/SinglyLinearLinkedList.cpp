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
        PNODE target;
        int iCount;

    public:
        
        SinglyLinearLinkedList()
        {
            this->first = NULL;
            this->target = NULL;
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

        void DeleteFirst()
        {
            if (first == NULL)
            {
                return;
            }
            else
            {
                temp = first;

                first = first->next;
                delete(temp);
            }
            iCount--;
        }

        void DeleteLast()
        {
            if (first == NULL)
            {
                return;
            }
            else if (first->next == NULL)
            {
                delete(first->next);
                first->next = NULL;
            }
            else
            {
                temp = first;

                while (temp->next->next != NULL)
                {
                    temp = temp->next;
                    delete(temp->next);
                }
                temp->next = NULL;
            }
            iCount--;
        }

        void InsertAtPos(int no, int Pos)
        {
            PNODE newn = NULL;

            if ((Pos < 1) || (Pos > iCount + 1))
            {
                cout<<"Invalid Position"<<endl;
                return;
            }

            if (Pos == 1)
            {
                InsertFirst(no);
            }
            else if (Pos == iCount + 1)
            {
                InsertLast(no);
            }
            else
            {
                temp = first;

                for (int i = 1; i <= Pos - 2; i++)
                {
                    temp = temp->next;
                }
                
                newn = new NODE;

                newn->data = no;
                newn->next = NULL;

                newn->next = temp->next;
                temp->next = newn;
            }
            iCount++;
        }

        void DeleteAtPos(int Pos)
        {
            PNODE newn = NULL;

            if ((Pos < 1) || (Pos > iCount))
            {
                cout<<"Invalid Position"<<endl;
                return;
            }

            if (Pos == 1)
            {
                DeleteFirst();
            }
            else if (Pos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = first;

                for (int i = 1; i < Pos - 2; i++)
                {
                    temp = temp->next;
                }
                target = temp->next;

                temp->next = target->next;      // temp->next = temp->next->next
                delete(target);
            }
            iCount--;
        }
};

int main()
{
    SinglyLinearLinkedList slobj;
    int iRet = 0;

    slobj.InsertFirst(51);
    slobj.InsertFirst(21);
    slobj.InsertFirst(11);

    slobj.InsertLast(101);
    slobj.InsertLast(111);
    slobj.InsertLast(121);

    slobj.Display();
    iRet = slobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // slobj.DeleteFirst();
    // slobj.Display();
    // iRet = slobj.Count();
    // cout<<"Number of elements are: "<<iRet<<endl;

    // slobj.DeleteLast();
    // slobj.Display();
    // iRet = slobj.Count();
    // cout<<"Number of elements are: "<<iRet<<endl;

    slobj.InsertAtPos(5, 5);
    slobj.Display();
    iRet = slobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    slobj.DeleteAtPos(2);
    slobj.Display();
    iRet = slobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    

    return 0;
}
