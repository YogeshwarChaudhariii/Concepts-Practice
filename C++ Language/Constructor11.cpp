/*
Private Constructor (Singleton Concept)
Create a class Singleton with a private constructor and a static method 
getInstance() that returns a static object of the class.
*/

#include<iostream>
using namespace std;

class Singleton
{
    private:
        Singleton()
        {
            cout<<"Singleton instance created"<<endl;
        }

    public:
        static Singleton& getInstance()
        {
            static Singleton instance;
            return instance;
        }
};

int main()
{
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();


    return 0;
}
