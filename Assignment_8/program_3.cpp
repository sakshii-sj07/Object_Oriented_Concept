// C++ program to demonstrate how to overload relational operators.

#include<iostream>
using namespace std;

class myClass {
    private:
        int value;

    public:
        myClass(int val) : value(val)
        {
        }

        // Overloading the equality operator(==)
        bool operator == (const myClass & other) const {

            // Compare the value of this object with the value of 'other'
            return value == other.value;
        }

        // Overloading the inequality operator(!=)
        bool operator != (const myClass & other) const {

            // Utilize the already overloaded '==' operator
            return !(*this == other);
        }

        // Overloading the less then operator (<)
        bool operator < (const myClass & other) const {

            // Compare the value of this object with the 'other' for less than
            return value < other.value;
        }

        // Overloading the greater then operator (>)
        bool operator > (const myClass & other) const {

            // Compare the value of this object with the 'other' for less than
            return value > other.value;
        }

        // Overloading the less than or equal to operator (>)
        bool operator <= (const myClass & other) const {

            // Utilize the already overloaded '>' operator
            return !(*this > other);
        }

        // Overloading the grater than or equal to operator (>)
        bool operator >= (const myClass & other) const {

            // Utilize the already overloaded '<' operator
            return !(*this < other);
        }
};

int main() {
    myClass obj1(20);
    myClass obj2(20);

    // Using overloaded relational operators
    if(obj1 == obj2) {
        cout<<"obj1 is equal to obj2"<<endl;
    } else {
        cout<<"obj1 is not equal to obj2"<<endl;
    }

    if(obj1 < obj2) {
        cout<<"obj1 is less than obj2"<<endl;
    } else {
        cout<<"obj1 is not less than obj2"<<endl;
    }

    // Using overloaded '!=' operator
    if(obj1 != obj2) {
        cout<<"obj1 is not equal to obj2"<<endl;
    } else {
        cout<<"obj1 is equal to obj2"<<endl;
    }

    // Using overloaded '>' operator
    if(obj1 > obj2) {
        cout<<"obj1 is grater than obj2"<<endl;
    } else {
        cout<<"obj1 is not greater than obj2"<<endl;
    }

    // Using oveerloaded '<=' operator
    if(obj1 <= obj2) {
        cout<<"obj1 is less than or equal to obj2"<<endl;
    } else {
        cout<<"obj1 is not less than or equal to obj2"<<endl;
    }

    // Using oveerloaded '>=' operator
    if(obj1 >= obj2) {
        cout<<"obj1 is greater than or equal to obj2"<<endl;
    } else {
        cout<<"obj1 is not greater than or equal to obj2"<<endl;
    }
}