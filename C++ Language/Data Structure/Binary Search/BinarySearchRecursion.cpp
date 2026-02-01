#include<iostream>
#include<vector>
using namespace std;

int RecursiveBinarySearch(vector<int> arr, int tar, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;        // Avoid overflow

        if (tar > arr[mid])     // 2nd half
        {
            return RecursiveBinarySearch(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])        // 1st half
        {
            return RecursiveBinarySearch(arr, tar, start, mid - 1);
        }
        else        // mid == ans
        {
            return mid;         // Found
        }
    }
    return -1;      // Not found
}

int main()
{
    int iRet1 = 0, iRet2 = 0;

    vector<int> Arr1 = {-1, 0, 3, 4, 5, 9, 12};     //odd
    int Target1 = 12;

    iRet1 = RecursiveBinarySearch(Arr1, Target1, 0, Arr1.size() - 1);
    cout<<"Target 1 is: "<<iRet1<<endl;   


    return 0;
}
