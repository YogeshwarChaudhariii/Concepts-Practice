// Count Capital Small Digit

#include<iostream>
using namespace std;

void CntCapSmlDgt(char str[])
{
    int CntCap = 0, CntSml = 0, CntDgt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            CntCap++;
        }
        
        if ((*str >= 'a') && (*str <= 'z'))
        {
            CntSml++;
        }

        if ((*str >= '0') && (*str <= '9'))
        {
            CntDgt++;
        }
        str++;
    }

    cout<<"Count of capital characters are: "<<CntCap<<endl;
    cout<<"Count of small characters are: "<<CntSml<<endl;
    cout<<"Count of digits are: "<<CntDgt<<endl;
    
}

int main()
{
    char ch[50];

    cout<<"Enter a string: "<<endl;
    cin.getline(ch, 50);

    CntCapSmlDgt(ch);


    return 0;
}