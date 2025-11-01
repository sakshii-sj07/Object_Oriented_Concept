// C++ program to implement Hierarchical Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

// first subclass
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This vehicle is Car" << endl;
    }
};

// second subclass
class Bus : public Vehicle
{
public:
    Bus()
    {
        cout << "This vehicle is Bus" << endl;
    }
};

int main()
{
    cout << "Name : Sakshi Yogesh Jadhav." << endl;
    cout << "Class : SY-B." << endl;
    cout << "Roll No. : 84." << endl;
    cout << endl;

    Car obj1;
    Bus obj2;

    return 0;
}