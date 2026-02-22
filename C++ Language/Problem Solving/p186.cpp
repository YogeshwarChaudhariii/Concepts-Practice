#include<iostream>
using namespace std;

int ChkFreq(char s[], char Value)
{
    int iCount = 0;
    while (*s != '\0')
    {
        if (*s == Value)
        {
            iCount++;
        }
        s++;
    }
    return iCount;
}

int main()
{
    char str[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    cout<<"Enter string: "<<endl;
    cin.getline(str, 50);

    cout<<"Enter a character: "<<endl;
    cin>>cValue;

    iRet = ChkFreq(str, cValue);

    cout<<cValue<<" occurs "<<iRet<<" times"<<endl;

    return 0;
}