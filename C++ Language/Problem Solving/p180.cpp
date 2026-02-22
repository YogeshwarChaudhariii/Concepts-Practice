// Count Spaces

#include<iostream>
using namespace std;

int CntSpc(char str[])
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char ch[50];
    int iRet = 0;

    cout<<"Enter a string: "<<endl;
    cin.getline(ch, 50);

    iRet = CntSpc(ch);

    cout<<"Count of spaces in string is: "<<iRet<<endl;

    return 0;
}