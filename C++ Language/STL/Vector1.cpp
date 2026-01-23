#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // int Arr[];
    vector<int>Arr;         //Increases dynamically

    /**************** push_back() ****************/

    // Add element to the end of container  
    Arr.push_back(0);       // {0};     
    cout<<"Element is: "<<Arr[0]<<endl
        << "Size of array with push_back() function is: "
        <<Arr.size()<<endl;
    
    Arr.push_back(11);     // {0,11}; 
    cout<<"Element is: "<<Arr[1]<<endl
        << "Size of array with push_back() function is: "
        <<Arr.size()<<endl;
    
    Arr.push_back(21);     // {0,11,21};
    cout<<"Element is: "<<Arr[2]<<endl
        << "Size of array with push_back() function is: "
        <<Arr.size()<<endl;
    
    Arr.push_back(51);     // {0,11,21,51}; 
    cout<<"Element is: "<<Arr[3]<<endl
        << "Size of array with push_back() function is: "
        <<Arr.size()<<endl<<endl;


    /**************** pop_back() ****************/

    // Remove last element from container
    Arr.pop_back();     
    cout<<"Size of array with pop_back function is: "
        <<Arr.size()<<endl;

    Arr.pop_back();     // {0,11,21};
    cout<<"Size of array with pop_back function is: "
        <<Arr.size()<<endl;

    Arr.pop_back();     // {0,11};
    cout<<"Size of array with pop_back function is: "
        <<Arr.size()<<endl;

    Arr.pop_back();     // {0};
    cout<<"Size of array with pop_back function is: "
        <<Arr.size()<<endl<<endl;
    
        
    /**************** clear() ****************/

    // Erase all elements
    Arr.clear();
    cout<<"Size of array with clear function is: "<<Arr.size()<<endl;

    return 0;
}
