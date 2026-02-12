// Another way

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class QueueX
{
    private:
        PNODE first;
        PNODE temp;
        int iCount;
        int Value;
    
    public:
        QueueX()
        {
            this->first = NULL;
            this->temp = NULL;
            this->iCount = 0;
            this->Value = 0;
        }

        void Enqueue(int no)        // InsertLast
        {
            PNODE temp = NULL;
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

        int Dequeue()      // DeleteFirst
        {
            if (first == NULL)
            {
                return 0;
            }
            else
            {
                temp = first;
                Value = temp->data;

                first = first->next;

                delete(temp);

                iCount--;

                return Value;
            }
        }

        void Display()
        {
            temp = first;

            while (temp != NULL)
            {
                cout<<"| "<<temp->data<<" | - ";
                temp=temp->next;
            }
            cout<<" | "<<endl;
        }

        int Count()
        {
            return iCount;
        }
};

int main()
{
    QueueX qobj;
    int iRet = 0;

    qobj.Enqueue(51);
    qobj.Enqueue(21);
    qobj.Enqueue(11);

    qobj.Display();
    iRet = qobj.Count();
    cout<<"Number of elements from the queue are: "<<iRet<<endl;

    iRet = qobj.Dequeue();
    cout<<"Removed element is: "<<iRet<<endl;

    qobj.Display();
    iRet = qobj.Count();
    cout<<"Number of elements from the queue are: "<<iRet<<endl;



    return 0;
}
