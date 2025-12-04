// Accept one number from user and print that number of * on screen. 

#include<stdio.h>

int Display(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        return -1;
    }
    
    while (iNo > i)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}