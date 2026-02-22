// Check Capital

#include<iostream>
using namespace std;

bool Display(char ChkCap)
{
    if ((ChkCap >= 'A') && (ChkCap <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{   
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter a character: "<<endl;
    cin>>ch;

    bRet = Display(ch);

    if (bRet == true)
    {
        cout<<ch<<" is a capital character"<<endl;
    }
    else
    {
        cout<<"It is not capital character"<<endl;
    }
    
    

    return 0;
}