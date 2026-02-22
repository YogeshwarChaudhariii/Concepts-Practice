// Count Small

#include<iostream>
using namespace std;

int CntSml(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = CntSml(ch);

    cout<<"Number of small characters in string are: "<<iRet<<endl;

    return 0;
}