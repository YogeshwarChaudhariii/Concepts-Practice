#include<iostream>
using namespace std;

class Demo
{
    public:
        int i, j, k;        // 12bytes
};

class Hello : public Demo
{
    public:
        int x, y;           // 12bytes + 8bytes = 20bytes
};

int main()
{
    cout<<sizeof(Demo)<<endl;
    cout<<sizeof(Hello)<<endl;

    return 0;
}
