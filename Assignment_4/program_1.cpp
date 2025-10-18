// Constructor

#include<iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;

    public:
        // Constructor with default values (1 for both length and width)
        Rectangle() : length(1.0) , width(1.0) {}

        // Constructor with custom values
        Rectangle(double len, double wid) : length(len), width(wid) {}

        // Destructor (Optional but good practice)
        ~Rectangle()  {
            cout<<"Rectangle object destroyed."<<endl;
        }

        // Getter methods for length and width
        double getLength() const {
            return length;
        }

        double getWidth() const {
            return width;
        }

        // Setter methods for length and width
        void setLength(double len) {
            length = len;
        }

        void setWidth(double wid) {
            width = wid;
        }

        // Calculate and return the area of rectangle
        double calculateArea() const {
            return length*width;
        }

        // Calculate and return perimeter of rectangle
        double calculatePerimeter() const {
            return 2 * (length + width);
        }
    };

    int main() {
        // Create a rectangle with custom values
        Rectangle rect(4.0, 40.0);

        // Display properties
        cout<<"Rectangle properties"<<endl;
        cout<<"Length : "<<rect.getLength()<<endl;
        cout<<"Width : "<<rect.getWidth()<<endl;
        cout<<"Area : "<<rect.calculateArea()<<endl;
        cout<<"Perimeter : "<<rect.calculatePerimeter()<<endl;

        return 0;
    }