// Program to print the address and character of a string using pointer
// Here p is pointer variable which holds the base address of str[]. 
#include<stdio.h>

int main()
{
    char str[] = "India";
    char *p;

    p = str;

    while (*p != '\0')
    {
        printf("Character = %c\t",*p);
        printf("Address = %p\n",p);
        p++;
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