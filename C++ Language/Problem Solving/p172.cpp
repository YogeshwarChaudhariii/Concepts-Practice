#include<iostream>
#include<string>
using namespace std;

int main()
{
    char Arr[50];

    cout<<"Enter your name: "<<endl;
    cin.getline(Arr, 50);

    cout<<"Your name is: "<<Arr<<endl;

    return 0;
}