// Count capital and small characters

#include<iostream>
using namespace std;

int Display(char *CountString)
{
    int iCountCapital = 0, iCountSmall = 0;

    while (*CountString != '\0')
    {
        if ((*CountString >= 'A') && (*CountString <= 'Z'))
        {
            iCountCapital++;
        }
        else if ((*CountString >= 'a') && (*CountString <= 'z'))
        {
            iCountSmall++;
        }
        
        CountString++;
    }

    cout<<"Count of capital charcters are "<<iCountCapital<<endl;
    cout<<"Count of small charcters are "<<iCountSmall<<endl;

    return 0;
}

int main()
{
    char str[30];
    int iRet;

    cout<<"Enter your string: "<<endl;
    cin.getline(str, 30);

    Display(str);


    return 0;
}