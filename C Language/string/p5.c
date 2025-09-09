// Input and output using scanf() and printf()

#include<stdio.h>

int main()
{
    char name[40];
    printf("Enter your name: \n");
    
    // Haven't use & sign. The name of array is address of the array.
    scanf("%s",name);

    printf("%s\n",name);
    printf("%s %s\n",name, "Chaudhari");
    
    return 0;
}

/*
Yogeshwar
Yogeshwar Chaudhari
*/
