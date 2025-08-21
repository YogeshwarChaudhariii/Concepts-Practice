/*
Create a structure Student with roll no, name and marks.
Input and display details of 5 students.
*/

#include<stdio.h>

# define SIZE 5

struct Student
{
    int RollNo;
    char Name[50];
    float Marks;
};

// struct Student student[1] =
// {

//     {87, "Yogeshwar", 80.37f}
// };

void InputDetails(struct Student student[], int size)
{
    int i = 0;

    for ( i = 0; i < size; i++)
    {
        printf("Enter details for Student %d: \n", i+1);
        printf("Roll Number: ");
        scanf("%d",&student[i].RollNo);

        printf("Name: ");
        scanf("%s",student[i].Name);

        printf("Marks: ");
        scanf("%f",&student[i].Marks);

        printf("\n");
    }
    printf("\n");
}

void DisplayDetails(struct Student student[], int size)
{
    int i;

    printf("Student Details...\n\n");

    for ( i = 0; i < size; i++)
    {
        printf("Student %d\n", i+1);
        printf("Roll Number: %d\n", student[i].RollNo);
        printf("Name: %s\n", student[i].Name);
        printf("Marks:  %.2f\n", student[i].Marks);
        
        printf("\n");
    }
    printf("\n");
}

int main()
{
    struct Student student[SIZE];

    InputDetails(student, SIZE);
    DisplayDetails(student, SIZE);
    
    return 0;

}
