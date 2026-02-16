// Find addition of all odd numbers from 1 to 1900000000 and all even numbers from 1 to 1900000000

// this program return only one thread that is main()

#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void FindEven(ull Start, ull End)
{
    for (ull i = Start; i <= End; i++)
    {
        if (i % 2 == 0)
        {
            EvenSum += i;
        }
    }
}

void FindOdd(ull Start, ull End)
{
    for (ull i = Start; i <= End; i++)
    {
        if (i % 2 != 0)
        {
            OddSum += i;
        }
    }
}

int main()
{
    ull Start = 0, End = 1900000000;

    auto StartTime = high_resolution_clock::now();       // Calculate how much time code gets tu execute

    FindOdd(Start, End);
    FindEven(Start, End);

    auto StopTime = high_resolution_clock::now();
    auto Duration = duration_cast<microseconds>(StopTime - StartTime);

    cout<<"Odd Sum: "<<OddSum<<endl;
    cout<<"Even Sum: "<<EvenSum<<endl;

    cout<<"Time for executing the code is: "<<Duration.count() / 1000000 <<" seconds"<< endl;
}

// it will take 4 seconds for calculate even and 4 seconds for calculate odd
