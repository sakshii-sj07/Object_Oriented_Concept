// C++ program for multilevel inheritance

#include<iostream>
using namespace std;

class Student {
    private:
        int roll;
        char name[25];

    public:
        void getData() {
            cout<<"----------------------------------------"<<endl;
            cout<<"Enter roll number : ";
            cin>>roll;
            cout<<"Enter student name : ";
            cin>>name;
        }

        void putData() {
            cout<<"-----------------------------"<<endl;
            cout<<"****** Student Marklist ******"<<endl;
            cout<<"-----------------------------"<<endl;
            cout<<"Roll number : "<<roll;
            cout<<"Student Name : "<<name;
        }
    
};

// Class StudentExam derived from class Student
class StudentExam : public Student {
    public:
        int sub1, sub2, sub3, sub4, sub5, sub6;
        float per;

        void acceptData() {
            getData();
            cout<<"Enter Marks for Subject 1 : ";
            cin>>sub1;
            cout<<"Enter Marks for Subject 2 : ";
            cin>>sub2;
            cout<<"Enter Marks for Subject 3 : ";
            cin>>sub3;
            cout<<"Enter Marks for Subject 4 : ";
            cin>>sub4;
            cout<<"Enter Marks for Subject 5 : ";
            cin>>sub5;
            cout<<"Enter Marks for Subject 6 : ";
            cin>>sub6;
        }

        void displayData() {
            putData();
            cout<<"Marks for Subject 1 : "<<sub1<<endl;
            cout<<"Marks for Subject 2 : "<<sub2<<endl;
            cout<<"Marks for Subject 3 : "<<sub3<<endl;
            cout<<"Marks for Subject 4 : "<<sub4<<endl;
            cout<<"Marks for Subject 5 : "<<sub5<<endl;
            cout<<"Marks for Subject 6 : "<<sub6<<endl;
        }
};

// Class StudentResult derived from class StudentExam
class StudentResult : public StudentExam {
    public:
        void calculate() {
            per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
            cout<<"Total Percentage : "<<per<<endl;
            cout<<"-------------------------------"<<endl;
        }
};

int main() {
    StudentResult str;   // Object str is created of derived Class StudentResult;
    int count, i;

    cout<<"Enter number of students you Want? : ";
    cin>>count;

    for ( i = 0; i < count; i++)
    {
        str.acceptData();
        str.displayData();
        str.calculate();
    }
    
    return 0;
}