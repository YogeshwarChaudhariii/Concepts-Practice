#include<iostream>
using namespace std;

int main()
{
    int i = 1, j = 1, k = 1;

    cout<<"for Loop: "<<endl;
    for ( i = 1; i <= 5; i++)
    {
        cout<<i<<" Jay Ganesh"<<endl;
    }

    cout<<endl<<endl;

    cout<<"while Loop: "<<endl;
    while (j <= 5)
    {
        cout<<j<<" Jay Ganesh"<<endl;
        j++;
    }
    
    cout<<endl<<endl;

    cout<<"do while: "<<endl;
    do
    {
        cout<<k<<" Jay Ganesh"<<endl;
        k++;
    } while (k <= 5);
    
    

    return 0;
}
