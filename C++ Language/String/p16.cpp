// Print character one by one

#include<iostream>
using namespace std;

void Display(char *GetString)
{
    cout<<"First character is: "<<GetString[0]<<endl;
    

    cout<<"Second character is: "<<GetString[1]<<endl;
    

    cout<<"Third character is: "<<GetString[2]<<endl;
    
}

int main()
{
    char str[30] = {'\0'};

    cout<<"Enter your string: "<<endl;
    cin.getline(str, 30);

    Display(str);


    return 0;
}