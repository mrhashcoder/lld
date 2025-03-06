#include "Shape.h"

class Circle : public Shape {
    private:
        int radius;

    public:
    int getArea() {
        return 3.14 * radius * radius;
    } 

    int getPerimeter() {
        return 2 * 3.14 * radius;
    }

    void takeInputs() {
        cout<<"Creating A Circle\n";
        cout<<"Enter Raidius : ";
        cin>>radius;
    }
};