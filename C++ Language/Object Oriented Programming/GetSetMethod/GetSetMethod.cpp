  #include<iostream>
  #include<string>
  using namespace std;
  
  class Teacher
  {
    private:
        double salary;

    public:
        // Properties / Attributes / Characteristics
        string name;
        string dept;
        string subject;

        // Functions / Member Functions / Behaviours (functions are member of our class) / Methods  
    void changeDept(string newDept)
    {
        dept = newDept;             // assign newDept value to dept
    }

    // Setter
    void setSalary(double s)
    {
      salary = s;
    }

    // Getter
    double getSalary()
    {
      return salary;
    }
  };

  class Student
  {
    public:
      string name;
      int RollNo;
      int age;
  };

  int main()
  {

    // Objects

    Teacher t1;
    t1.name = "Yogeshwar Prakash Chaudhari";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(25000);

    Student s1;
    s1.name = "Shubham Y C";
    s1.age = 24;
    s1.RollNo = 87;
 
    cout << "Salary is: " << t1.getSalary() << endl;

    cout << "Student Name is: " << s1.name << endl;

    return 0;
  }
