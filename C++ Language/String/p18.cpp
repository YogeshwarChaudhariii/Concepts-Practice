// Print character one by one and their index

#include<iostream>
using namespace std;

void Display(char GetString[])  //Change []
{
    int iNo = 0, iCount = 0;

    while (GetString[iCount] != '\0')
    {
        cout<<iCount
            <<" character is "<<GetString[iCount]<<endl;
        iCount++;
    }
}

int main()
{
    char str[30] = {'\0'};

    cout<<"Enter your string: "<<endl;
    cin.getline(str, 30);

    Display(str);


    return 0;
}