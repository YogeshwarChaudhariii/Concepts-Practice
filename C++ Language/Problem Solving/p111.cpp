// Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<iostream>
using namespace std;

int main()
{
    int i = 0;

    cout<<"Symbol\tDecimal\tHex\tOctal"<<endl;
    cout<<"------------------------------------------------"<<endl;

    for ( i = 0; i <= 255; i++)
    {
        // Print symbol
        if (i >= 32 && i <= 126)
        {
            cout<<(char)i<<"\t";
        }
        else
        {
            cout<<"\t";
        }

        cout<<i<<"\t";
        cout<<hex<<i<<"\t";
        cout<<oct<<i<<endl;
        
    }
    


    return 0;
}