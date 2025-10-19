// C++program to illustrate the implementation of Hybrid Inheritance

#include<iostream>
using namespace std;

// base class
class Vehicle {
    public:
        Vehicle() {
            cout<<"This is a Vehicle"<<endl;
        }
};

// base class
class Fare {
    public:
        Fare() {
            cout<<"Fare of Vehicle"<<endl;
        }
};

// first subclass
class Car : public Vehicle {
    public:
        Car() {
            cout<<"This Vehicle is Car"<<endl;
        }
};

// second subclass
class Bus : public Vehicle , public Fare {
    public:
        Bus() {
            cout<<"This Vehicle is Bus with Fare"<<endl;
        }
};

int main() {
    Bus obj;

    return 0;
}