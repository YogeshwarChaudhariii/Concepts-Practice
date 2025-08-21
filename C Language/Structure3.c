/*
Create a structure Teacher with taecher id, name and subject.
Input and display details of 5 teacher.
*/

#include<stdio.h>

struct Teacher
{
    int TeacherId;
    char Name[30];
    char Subject[30];
};

# define SIZE 2

void InputDetails(struct Teacher teacher[], int size)
{
    int i = 0;

    printf("Enter Teacher Details: \n");
    
    for ( i = 0; i < size; i++)
    {
        printf("Teacher %d\n", i+1);

        printf("Teacher Id: ");
        scanf("%d", &teacher[i].TeacherId);

        printf("Teacher Name: ");
        scanf("%s", teacher[i].Name);

        printf("Teacher Subject: ");
        scanf("%s", teacher[i].Subject);

        printf("\n");
    }
    printf("\n");
}

void DisplayDetails(struct Teacher teacher[], int size)
{
    int i = 0;

    printf("Teacher Details: \n");
    
    for ( i = 0; i < size; i++)
    {
        printf("Teacher %d\n", i+1);

        printf("Teacher Id: %d\n", teacher[i].TeacherId);
        printf("Teacher Name: %s\n", teacher[i].Name);
        printf("Teacher Subject: %s\n", teacher[i].Subject);

        printf("\n");
    }
    printf("\n");
}

int main()
{
    struct Teacher teacher[SIZE];

    InputDetails(teacher, SIZE);
    DisplayDetails(teacher, SIZE);
    
    return 0;
}