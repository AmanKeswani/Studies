#include <iostream>
using namespace std;

class Shapes {
    public: double area(double radius){
        // circle

        return (22 * radius * radius/7);
    }

    public: int area(int l, int b){
        // rectangle

        return (l * b);
    }

    public: int area(int side){
        // square

        return (side * side);
    }

    public: double area(double base, double height){
        // triangle

        return (base * height/2);
    }

};

int main(){

    Shapes shape;

    int rectangle, square;
    double Circle, Triangle;

    rectangle = shape.area(5, 5);
    cout << "rectangle = " << rectangle << endl;

    square = shape.area(5);
    cout << "square = " << square << endl;

    Circle = shape.area(5.0);
    cout << "Circle = " << Circle << endl;

    Triangle = shape.area(5.0, 5.0);
    cout << "Triangle = " << Triangle << endl;

    return 0;
}