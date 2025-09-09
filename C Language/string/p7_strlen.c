// strlen() function

#include<stdio.h>
#include<string.h>

unsigned int PointerStrlen(char *str)
{
    char *p = str;

    while (*p!='\0')
    {
        p++;
    }

    printf("Length of %s string using pointer is: %u\n",str, strlen(str));
    
    return p-str;
}

unsigned int ArrayStrlen(char str[])
{
    int i = 0;
    
    while (str[i]!='\0')
    {
        i++;
    }

    printf("Length of %s string using array is: %u\n",str, strlen(str));
    
    return i;
}

int main()
{
    char str[50];

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

    printf("Length of %s string is: %u\n",str, strlen(str));

    ArrayStrlen(str);

    PointerStrlen(str);

    
    
    return 0;
}

/*
Enter a string:
Yogeshwar Chaudhari
Length of Yogeshwar Chaudhari
 string is: 20
Length of Yogeshwar Chaudhari
 string using array is: 20
Length of Yogeshwar Chaudhari
 string using pointer is: 20
*/