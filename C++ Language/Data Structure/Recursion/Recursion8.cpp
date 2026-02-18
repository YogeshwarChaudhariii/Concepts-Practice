#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    static int iSum = 1;

    if (iNo > 1)
    {
        iSum = iSum * iNo;
        Factorial(iNo - 1);
    }
    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 4;

    iRet = Factorial(iValue);

    cout<<"Factorial is: "<<iRet<<endl;



    return 0;
}