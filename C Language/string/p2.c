/*
A string variable is a 1d array of ASCII character terminated by a NULL character.
To create a string variable we need to declared a character array with size sufficient to 
hold all the characters of the string including NULL character.
*/

#include<stdio.h>

int main()
{
    char str1[] = {'J','a','y',' ','G','a','n','e','s','h','\0'};
    char str2[] = {"Jay Ganesh"};

    printf(str1);
    printf(str2);
    return 0;
}

/*
Jay Ganesh 
Jay Ganesh
*/