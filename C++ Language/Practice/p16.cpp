//String Reverse

#include<iostream>
#include<string>
using namespace std;

string StringReverse(string& s)
{
    string res;

    for (int i = s.size() -1; i >= 0; i--)
    {
        res += s[i];
    }
    return res;
    
}

int main()
{
    string  str1 = "abcdef";
    string res = StringReverse(str1);

    cout<<res;

    return 0;
}