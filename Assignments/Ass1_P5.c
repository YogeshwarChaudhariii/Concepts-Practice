// Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (int iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number to print that no * on screen: \n");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}