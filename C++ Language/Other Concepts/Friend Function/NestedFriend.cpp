#include<iostream>
#include<cstring>
using namespace std;

const int Size = 20;

struct Holder
{
    private:
        int a[Size];

    public:
        void Initialize();
        struct Pointer;
        friend Pointer;

    struct Pointer
    {
        private:
            Holder* h;
            int *p;

        public:
            void Initialize(Holder* h);

            //Move around in the array
            void Next();
            void Previous();
            void Top();
            void End();

            //Access values:
            int Read();
            void Set(int i);
    };
};

void Holder::Initialize()
{
    memset(a, 0, Size * sizeof(int));
}

void Holder::Pointer::Initialize(Holder* rv)
{
    h = rv;
    p = rv->a;
}

void Holder::Pointer::Next()
{
    if (p < &(h->a[Size - 1]))
    {
        p++;
    }
}

void Holder::Pointer::Previous()
{
    if (p > &(h->a[0]))
    {
        p--;
    }
}

void Holder::Pointer::Top()
{
    p = &(h->a[0]);
}

void Holder::Pointer::End()
{
    p = &(h->a[Size - 1]);
}

int Holder::Pointer::Read()
{
    return *p;
}

void Holder::Pointer::Set(int i)
{
    *p = i;
}

int main()
{
    Holder h;
    Holder::Pointer hp1, hp2;
    int i;

    h.Initialize();
    hp1.Initialize(&h);
    hp2.Initialize(&h);

    for ( i = 0; i < Size; i++)
    {
        hp1.Set(i);
        hp1.Next();
    }

    hp1.Top();
    hp2.End();

    for ( i = 0; i < Size; i++)
    {
        cout<<"hp1 = "<<hp1.Read()<<endl
            <<"hp2 = "<<hp2.Read()<<endl<<endl;

            hp1.Next();
            hp2.Previous();
    }
    
    return 0;
}
