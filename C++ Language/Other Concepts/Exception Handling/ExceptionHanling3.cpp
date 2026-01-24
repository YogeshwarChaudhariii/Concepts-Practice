// Built in exception classes

#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw runtime_error("Something went wrong");
    }
    catch(runtime_error &e)
    {
        cout<<e.what()<<endl;       // catch(...)?
    }
    
    return 0;

}
