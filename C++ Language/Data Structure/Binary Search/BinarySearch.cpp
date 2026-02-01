#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int tar)
{
    int start = 0, end = arr.size() - 1, mid;

    while (start <= end)
    {
        // mid = (start + end) / 2;     //it will also work but the elements are more then it will not handle 

        mid = start + (end - start) / 2;        // it will opitmize code and helps in not getting overflow

        if (tar > arr[mid])     // 2nd Half 
        {
            start = mid + 1;
        }
        else if (tar < arr[mid])        // 1st Half
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;      // target is not exist in vector
}

int main()
{
    int iRet1 = 0, iRet2 = 0;

    vector<int> Arr1 = {-1, 0, 3, 4, 5, 9, 12};     //odd
    int Target1 = 12;

    iRet1 = BinarySearch(Arr1, Target1);
    cout<<"Target 1 is: "<<iRet1<<endl;



    // vector<int> Arr2 = {-1, 0, 3, 5, 9, 12};        //even
    // int Target2 = 10;
    // iRet2 = BinarySearch(Arr2, Target2);
    // cout<<"Target 2 is: "<<iRet2<<endl;    


    return 0;
}
