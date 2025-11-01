// C++ program to show unary operator overloading

#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    // Constructor to initialize the object's value
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    // Overloading(-) operator to perform decrement operation of distance object
    void operator-()
    {
        feet--;
        inch--;
        cout << "Feet and Inches (Decrement) : " << feet << "'" << inch << endl;
    }
};

int main()
{
    cout << "Name : Sakshi Yogesh Jadhav." << endl;
    cout << "Class : SY-B." << endl;
    cout << "Roll No. : 84." << endl;
    cout << endl;

    Distance d1(8, 9);

    // Use (-) unary operator by single opernd

    -d1;

    return 0;
}