// Linked list recursively
// without loop

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLinkedList
{
    private:
        PNODE first;
    
        // Recursive InsertLast
        PNODE InsertLastR(PNODE head, int no)
        {
            if (head == NULL)
            {
                PNODE newn = new NODE;

                newn->data = no;
                newn->next = NULL;

                return newn;
            }

            head->next = InsertLastR(head->next, no);
            return head;
            
        }

        // Recursive Display
        void DisplayR(PNODE head)
        {
            if (head == NULL)
            {
                return;
            }
            else
            {
                cout<<" | "<<head->data<<" | ->";
                DisplayR(head->next);
            }
        }

        // Recursive Count
        int CountR(PNODE head)
        {
            if (head == NULL)
            {
                return 0;
            }
            else
            {
                return 1 + CountR(head->next);
            }
        }

    public:
        SinglyLinkedList()
        {
            this->first = NULL;
        }

        void InsertLast(int no)
        {
            first = InsertLastR(first, no);
        }

        void Display()
        {
            DisplayR(first);
            cout<<"NULL\n";
        }

        int Count()
        {
            return CountR(first);
        }
};


int main()
{

    SinglyLinkedList sobj;
    int iRet = 0;

    sobj.InsertLast(11);
    sobj.InsertLast(21);
    sobj.InsertLast(51);
    
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    


    return 0;
}
