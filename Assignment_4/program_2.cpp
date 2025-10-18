// C++ program to illustrate Constructor overloading

#include<iostream>
using namespace std;

class Construct {
    public : 
        float area;

        // Constructor with no parameters
        Construct() {
            area = 0;
        }

        // Constructor with two parameters
        Construct(int a, int b) {
            area = a * b;
        }

        void Display() {
            cout<<area<<endl;
        }
};

int main() {
    // Constructor overloading with two different constructors of clss name
    Construct O1;
    Construct O2(10,20);

    O1.Display();
    O2.Display();

    return 0;
}