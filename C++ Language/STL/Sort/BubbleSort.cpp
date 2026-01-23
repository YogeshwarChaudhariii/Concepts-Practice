#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int> &Arr)
{
    int iElements = Arr.size();

    for (int i = 0; i < iElements; i++)
    {
        for (int j = 0; j < iElements - i - 1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                swap(Arr[j], Arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> Arr = {5, 3, 1, 4, 2};

    BubbleSort(Arr);

    for (int i = 0; i < Arr[i]; i++)
    {
        cout<<Arr[i]<<" ";
    }
    

    return 0;
}
