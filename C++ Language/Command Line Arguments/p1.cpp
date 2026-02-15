// Command line arguments are values passed to a program when it starts execution.
// Instead of taking input using cin, we pass input while running the program.

// argc → Argument Count
// It stores number of arguments passed.
// It always includes the program name.

// argv → Argument Vector
// It is an array of character pointers (array of strings).
// Each argument is stored as string.

#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"Total arguments: "<<argc<<endl;

    for (int i = 0; i < argc; i++)
    {
        cout<<"Argument "<<i<<" : "<<argv[i]<<endl;
    }

    return 0;
}


/*
eg.
program.exe 10 20

then:
argc = 3

argv[0] = "program.exe"
argv[1] = "10"
argv[2] = "20"

*/
