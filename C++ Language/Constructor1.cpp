#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1, No2;

        Arithmatic()
        {
            cout<<"Inside default constructor"<<endl;
            No1 = 0;
            No2 = 0;
        }

        Arithmatic(int A, int B)
        {
            cout<<"Inside parameterised constructor"<<endl;
            No1 = A;
            No2 = B;
        }

        ~Arithmatic()
        {
            cout<<"Inside destructor"<<endl;
        }

        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithmatic aobj1;
    Arithmatic aobj2(11,10);
    int iRet = 0;

    iRet = aobj1.Addition();
    cout<<"Addition of aobj1 is: "<<iRet<<endl;

    iRet = aobj2.Addition();
    cout<<"Addition of aobj2 is: "<<iRet<<endl;


    return 0;
}
