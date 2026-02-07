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
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;

    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"---------------- Singly Linear LinkedList -------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;

    while (1)
    {
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"------------------ Please select the option -----------------"<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"1 : Insert new node at first position"<<endl;
        cout<<"2 : Insert new node at last position"<<endl;
        cout<<"3 : Insert new node at given position"<<endl;
        cout<<"4 : Delete the node from first position"<<endl;
        cout<<"5 : Delete the node from last position"<<endl;
        cout<<"6 : Delete the node from given position"<<endl;
        cout<<"7 : Display all elements of LinkedList"<<endl;
        cout<<"8 : Count number of nodes of LinkedList"<<endl;
        cout<<"0 : Terminate the application"<<endl;
        cout<<"-------------------------------------------------------------"<<endl;

        cin>>iChoice;

        if (iChoice == 1)
        {
            cout<<"Enter the data that you want to insert: "<<endl;
            cin>>iValue;

            slobj.InsertFirst(iValue);
        }
        else if (iChoice == 2)
        {
            cout<<"Enter the data that you want to insert: "<<endl;
            cin>>iValue;

            slobj.InsertLast(iValue);
        }
        else if (iChoice == 3)
        {
            cout<<"Enter the data that you want to insert: "<<endl;
            cin>>iValue;

            cout<<"Enter the position at which you want to insert new node: "<<endl;
            cin>>iPos;

            slobj.InsertAtPos(iValue, iPos);
        }
        else if (iChoice == 4)
        {
            cout<<"Deleting the first element from LinkedList: "<<endl;

            slobj.DeleteFirst();
        }
        else if (iChoice == 5)
        {
            cout<<"Deleting the last element from LinkedList: "<<endl;

            slobj.DeleteLast();
        }
        else if (iChoice == 6)
        {
            cout<<"Deleting the element from given position from LinkedList"<<endl;

            cout<<"Enter the position from which you want to delete the node : "<<endl;
            cin>>iPos;

            slobj.DeleteAtPos(iPos);
        }
        else if (iChoice == 7)
        {
            cout<<"Elements of the LinkedList are :"<<endl;

            slobj.Display();
        }
        else if (iChoice == 8)
        {
            iRet = slobj.Count();
            cout<<"Number of elements in the LinkedList are : "<<iRet<<endl;
        }
        else if (iChoice == 0)
        {
            cout<<"Thank you for using our application"<<endl;
            break;
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
        }
        cout<<"-------------------------------------------------------------"<<endl<<endl;
    }
    
    

    return 0;
}
