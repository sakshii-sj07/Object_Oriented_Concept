#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee
{
private:
    int no;
    string name;

public:
    virtual void salary() = 0;

    virtual void display() = 0;

protected:
    void getEmployeeDetails()
    {
        cout << "Enter employee number: ";
        cin >> no;
        cout << "Enter employee name: ";
        cin >> name;
    }

    void showEmployeeDetails() const
    {
        cout << "Employee Number: " << no << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Derived class: SalariedEmployee
class SalariedEmployee : public Employee
{
private:
    double monthlySalary;

public:
    void salary() override
    {
        getEmployeeDetails();
        cout << "Enter employee monthly salary: ";
        cin >> monthlySalary;
    }

    void display() override
    {
        cout << "\nSalaried Employee:\n";
        showEmployeeDetails();
        cout << "Salary: " << monthlySalary << endl;
    }
};

// Derived class: HourlyEmployee
class HourlyEmployee : public Employee
{
private:
    double hours;
    double rate;

public:
    void salary() override
    {
        getEmployeeDetails();
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }

    void display() override
    {
        cout << "\nHourly Employee:\n";
        showEmployeeDetails();
        cout << "Hours: " << hours << endl;
        cout << "Hourly Rate: " << rate << endl;
        cout << "Salary: " << (hours * rate) << endl;
    }
};

// Derived class: CommissionedEmployee
class CommissionedEmployee : public Employee
{
private:
    double salaryDouble;
    int overtime;

public:
    void salary() override
    {
        getEmployeeDetails();
        cout << "Enter base salary: ";
        cin >> salaryDouble;
        cout << "Enter overtime hours: ";
        cin >> overtime;
    }

    void display() override
    {
        cout << "\nCommissioned Employee:\n";
        showEmployeeDetails();
        cout << "Base Salary: " << salaryDouble << endl;
        cout << "Overtime: " << overtime << " hours" << endl;
        cout << "Total Salary: " << (salaryDouble + (overtime * 15)) << endl;
    }
};

// Main function
int main()
{
    cout << "Name : Sakshi Yogesh Jadhav." << endl;
    cout << "Class : SY-B." << endl;
    cout << "Roll No. : 84." << endl;
    cout << endl;

    Employee *employees[3];

    SalariedEmployee newSalariedEmployee;
    HourlyEmployee newHourlyEmployee;
    CommissionedEmployee newCommissionedEmployee;

    employees[0] = &newSalariedEmployee;
    employees[1] = &newHourlyEmployee;
    employees[2] = &newCommissionedEmployee;

    cout << "\n=== Enter Employee Details ===\n";
    for (int i = 0; i < 3; i++)
    {
        employees[i]->salary();
        cout << endl;
    }

    cout << "\n=== Employee Details ===\n";
    for (int i = 0; i < 3; i++)
    {
        employees[i]->display();
        cout << endl;
    }

    system("pause");
    return 0;
}