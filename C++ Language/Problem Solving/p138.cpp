// Given a string, find the first non-repeating character and return its index. If all characters repeat, return -1.

/*
Input:  "leetcode"
Output: 0
Input:  "aabb"
Output: -1
*/

#include<iostream>
#include<string>
using namespace std;

int FirstNonRepeating(string str)
{
    int freq[256] = {0};

    for(int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    for(int i = 0; i < str.length(); i++)
    {
        if(freq[str[i]] == 1)
        {
            return i;
        }
    }

    return -1;  
}

int main()
{
    string s = "leetcode";

    int result = FirstNonRepeating(s);

    if(result != -1)
        cout << "First non-repeating character at index: " << result;
    else
        cout << "No non-repeating character found.";

    return 0;
}