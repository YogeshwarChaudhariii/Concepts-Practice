// Count string length

#include<iostream>
using namespace std;

int Display(char *CountStringLength)
{
    int iCount = 0;

    while (*CountStringLength != '\0')
    {
        iCount++;
        CountStringLength++;
    }

    return iCount;
    
}

int main()
{
    char str[30];
    int iRet;

    cout<<"Enter your string: "<<endl;
    cin.getline(str, 30);

    iRet = Display(str);

    cout<<"Your string is: "<<str<<endl
        <<"Number of characters are: "<<iRet<<endl;

    return 0;
}