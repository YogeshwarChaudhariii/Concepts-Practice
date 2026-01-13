// Use of printf and scanf

#include<cstdio>
using namespace std;

int main()
{
    char str[30] = {'\0'};

    printf("Enter your name: \n");
    scanf("%[^'\n']s",str);

    printf("Your name is: \n%s",str);

    return 0;
}