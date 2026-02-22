#include<iostream>
using namespace std;

int Display(char Name[])
{
    int iCount = 0;

    while (*Name != '\0')
    {
        iCount++;
        Name++;
    }

    return iCount;
    
}

int main()
{
    char ch[50];
    int iRet = 0;

    cout<<"Enter your name: "<<endl;
    cin.getline(ch, 50);

    iRet = Display(ch);

    cout<<"Number of characters are: "<<iRet<<endl;

    return 0;
}