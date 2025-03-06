#include "Shape.h"

class Rectangle : public Shape {
    private:
        int length;
        int width;
    public:
    int getArea() {
        return length * width;
    } 

    int getPerimeter() {
        return 2 * (length + width);
    }


    void takeInputs() {
        cout<<"Creating A Rectangle\n";
        cout<<"Enter Length : ";
        cin>>length;
        cout<<"Enter Width : ";
        cin>>width;
    }
};