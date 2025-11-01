// C++ program 2 to illustrate the multiple Inheritance

#include <iostream>
using namespace std;

// Base class Person
class Person
{
public:
    Person()
    {
        cout << "Person's Constructor called" << endl;
    }
};

// Derived class 1: Faculty
class Faculty : public Person
{
public:
    Faculty()
    {
        cout << "Faculty's Constructor called" << endl;
    }
};

// Derived class 2: Student
class Student : public Person
{
public:
    Student()
    {
        cout << "Student's Constructor called" << endl;
    }
};

// Berived class 3: TA (inherits from both Faulty and Student)
class TA : public Faculty, public Student
{
public:
    TA()
    {
        cout << "TA's Constructor called" << endl;
    }
};

int main()
{
    cout << "Name : Sakshi Yogesh Jadhav." << endl;
    cout << "Class : SY-B." << endl;
    cout << "Roll No. : 84." << endl;
    cout << endl;

    TA ta;

    return 0;
}