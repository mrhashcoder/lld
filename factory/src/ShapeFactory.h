#include<bits/stdc++.h>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

class ShapeFactory {
    public:
    Shape* getShape(string typeOfShape){
        if(typeOfShape == "circle") {
            return new Circle();
        }else if(typeOfShape == "square"){
            return new Square();
        }else if(typeOfShape == "rectangle"){
            return new Rectangle();
        }else{
            return new Circle();
        }
    };
};