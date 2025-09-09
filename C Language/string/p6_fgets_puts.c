// Input and output strings useing gets() and puts()

/* 
    For entering strings with whitespaces we use the function gets().
It stops reading only when it encounters a newline and replace this newline
by the NULL character.
    We have another function puts() which can output a string and replaces the NULL
character by newline.
    gets() function can't check buffer spaces, if more input is provided than the 
size of array will overrite locations after the end of array. 
To avoid this we can use the function fgets(). 
*/


#include<stdio.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    // gets(name);
    
    fgets(name,sizeof(name),stdin);

    printf("Entered name is: ");
    puts(name);
    
    return 0;
}

/*
Enter your name: Yogeshwar Chaudhari
Entered name is: Yogeshwar Chaudhari
*/