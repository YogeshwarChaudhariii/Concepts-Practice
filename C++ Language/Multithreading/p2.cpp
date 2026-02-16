// Find addition of all odd numbers from 1 to 1900000000 and all even numbers from 1 to 1900000000

// Here we are using thread with function pointer

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

    // Launching threads
    // This is use of function pointer
    std::thread t1(FindEven, Start, End);
    std::thread t2(FindOdd, Start, End);

    // Join thread (run in the background) 
    // Join ensures main() waits for t1 and t2 to finish
    t1.join();
    t2.join();

    auto StopTime = high_resolution_clock::now();

    // Using milliseconds or double for better precision
    auto Duration = duration_cast<microseconds>(StopTime - StartTime);

    cout<<"Odd Sum: "<<OddSum<<endl;
    cout<<"Even Sum: "<<EvenSum<<endl;

    cout<<"Time for executing the code is: "<<Duration.count() / 1000000 <<" seconds"<< endl;
}

// it will call first FindEven and come back and create second thread and call FindOut
