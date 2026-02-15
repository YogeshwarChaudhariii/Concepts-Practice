// Convert string to integer using atoi();
// All arguments are stored as strings.

#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    cout << "Addition is: " << num1 + num2;

    return 0;
}
