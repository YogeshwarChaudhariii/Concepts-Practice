#include<iostream>
#include<stdbool.h>

bool Display(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    std::cout<<"Enter a character: "<<std::endl;
    std::cin>>ch;

    bRet = Display(ch);

    if (bRet == true)
    {
        std::cout<<"capital";
    }
    else
    {
        std::cout<<"small";
    }

    return 0;
}