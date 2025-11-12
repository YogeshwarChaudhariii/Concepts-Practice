#include<stdio.h>

struct Address
{
    char State[50];
    char City[50];
    int FlatNo;
    int Pincode;
};

struct Student
{
    char FirstName[50];
    char MiddleName[50];
    char LastName[50];
    int RollNo;

    struct Address StudentAddress;
};

void DisplayStudentInformation(struct Student sobj)
{
    printf("Student First name is: %s",sobj.FirstName);
    printf("\nStudent Middle name is: %s",sobj.MiddleName);
    printf("\nStudent Last name is: %s",sobj.LastName);
    printf("\nStudent Roll Number is: %d",sobj.RollNo);
    printf("\nStudent State is: %s",sobj.StudentAddress.State);
    printf("\nStudent City is: %s",sobj.StudentAddress.City);
    printf("\nStudent Flat Number is: %d",sobj.StudentAddress.FlatNo);
    printf("\nStudent Pincode is: %d",sobj.StudentAddress.Pincode);
}

int main()
{
    struct Student s1 = {"Yogeshwar", "Prakash", "Chaudhari", 87, 
                        {"Maharashtra", "Pune", 1, 123456}};
    
    DisplayStudentInformation(s1);


    return 0;
}