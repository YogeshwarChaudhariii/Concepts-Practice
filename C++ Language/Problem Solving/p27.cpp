// Accept single digit number from user and print it into word. 

/*
Input : 9
Output : Nine
Input : -3
Output : Three
Input : 12
Output : Invalid Number
*/

#include<iostream>
using namespace std;

void Display(int iNo)
{
    switch (iNo)
    {
    case 0:
        cout<<"Zero"<<endl;
        break;
    case 1:
        cout<<"One"<<endl;
        break;
    case 2:
        cout<<"Two"<<endl;
        break;
    case 3:
        cout<<"Three"<<endl;
        break;
    case 4:
        cout<<"Four"<<endl;
        break;
    case 5:
        cout<<"Five"<<endl;
        break;
    case 6:
        cout<<"Six"<<endl;
        break;
    case 7:
        cout<<"Seven"<<endl;
        break;
    case 8:
        cout<<"Eight"<<endl;
        break;
    case 9:
        cout<<"Nine"<<endl;
        break;
    
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter your number: "<<endl;
    cin>>iValue;

    Display(iValue);


    return 0;
}