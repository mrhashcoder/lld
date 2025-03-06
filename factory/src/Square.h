#include "Shape.h"

class Square : public Shape { 
    private:
        int side;

    public:
    int getArea() {
        return side * side;
    } 

    int getPerimeter() {
        return 4 * side;
    }


    void takeInputs() {
        cout<<"Creating A Square\n";
        cout<<"Enter Side : ";
        cin>>side;
    }
};