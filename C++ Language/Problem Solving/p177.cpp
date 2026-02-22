// Count Captial

#include<iostream>
using namespace std;

int CntCap(char str[])
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && (*str <= 'Z'))
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

    iRet = CntCap(ch);

    cout<<"Number of capital characters are: "<<iRet<<endl;

    return 0;
}