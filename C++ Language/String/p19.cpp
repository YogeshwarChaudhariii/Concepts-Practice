// Count white spaces between strings

#include<iostream>
using namespace std;

int Display(char *CountSpaces)
{
    int iCount = 0;

    while (*CountSpaces != '\0')
    {
        if (*CountSpaces == ' ')
        {
            iCount++;
        }
        CountSpaces++;
    }

    return iCount;
    
}

int main()
{
    char str[30];
    int iRet;

    cout<<"Enter string"<<endl;
    cin.getline(str, 30);

    iRet = Display(str);

    cout<<"White spaces are: "<<iRet<<endl;

    return 0;
}