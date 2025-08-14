/*
Write a class Book with attributes title and price. Use the compiler-generated 
copy constructor to create a copy of an existing object.
*/

#include<iostream>
using namespace std;

class Book
{
    public:
    string Title;
    int Price;

    Book()
    {
        Title = "Thinking in C++";
        Price = 200;
    }

    Book(Book &bref)
    {
        this->Title = bref.Title;
        this->Price = bref.Price;
    }
};

int main()
{
    Book bobj1;
    Book bobj2(bobj1);

    string str;
    int p;

    str = bobj1.Title;
    cout<<"Name of book is: "<<str<<endl;

    p = bobj1.Price;
    cout<<"Price of book is: "<<p<<" Rs"<<endl;

    str = bobj2.Title;
    cout<<"Name of book is: "<<str<<endl;

    p = bobj2.Price;
    cout<<"Price of book is: "<<p<<" Rs"<<endl;


    return 0;
}