// Program to print characters of a string and address of each character

#include<stdio.h>

int main()
{
    char str[] = "India";
    int i = 0;
    for ( i = 0; i < str[i]!='\0'; i++)
    {
        printf("Character = %c\t",str[i]);
        printf("Address = %p\n",&str[i]);
    }
    
    return 0;
}

/*
Character = I   Address = 0061FF16
Character = n   Address = 0061FF17
Character = d   Address = 0061FF18
Character = i   Address = 0061FF19
Character = a   Address = 0061FF1A
*/