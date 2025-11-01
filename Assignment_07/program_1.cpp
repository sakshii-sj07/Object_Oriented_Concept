// C++ program to illustrate the multiple Inheritance

#include <iostream>
using namespace std;

// first base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

// second base class
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a Four Wheeler" << endl;
    }
};

// subclass derived from two base classes
class Car : public Vehicle, public FourWheeler
{
public:
    Car()
    {
        cout << "This Four Wheeler vehicle is a Car" << endl;
    }
};

int main()
{
    cout << "Name : Sakshi Yogesh Jadhav." << endl;
    cout << "Class : SY-B." << endl;
    cout << "Roll No. : 84." << endl;
    cout << endl;

    Car obj;

    return 0;
}