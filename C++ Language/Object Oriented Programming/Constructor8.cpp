/*
Create a class StringHolder that stores a string dynamically using char*. 
Write a parameterized constructor to allocate memory and store the string.
*/

#include<iostream>
#include<cstring>
using namespace std;

class StringHolder
{
    public:
    char * str;

    StringHolder(const char *s)
    {
        str = new char[sizeof(s) + 1];
        strcpy(str, s);
    }

    ~StringHolder()
    {
        delete[] str;
        cout<<"memory deallocated..."<<endl;
    }

};

int main()
{
    StringHolder sobj("Yogeshwar Chaudhari");
    cout<<sobj.str<<endl;


    return 0;
}
