#include<iostream>
using namespace std;

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    cout<<"Enter string: "<<endl;
    cin.getline(Arr, 50);

    cout<<"Enter the character: "<<endl;
    cin>>cValue;

    return 0;
}