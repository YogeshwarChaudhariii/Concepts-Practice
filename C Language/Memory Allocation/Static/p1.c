#include<stdio.h>

void Display()
{
    static int i = 11;
    i++;
    printf("Value of i is: %d\n",i);
}

int main()
{
    Display();
    Display();
    Display();

    return 0;
}

/*
With static O/P is: 12 13 14
Without static O/P is: 12 12 12
*/
