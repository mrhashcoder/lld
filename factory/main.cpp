/*
    **            **    ** ** ****          **       **           **            ** ** ** **   **       **
    ** **     **  **    **       **         **       **         **  **          **            **       **
    **   **  **   **    **       **         **       **        **     **        **            **       **
    **     **     **    **** ** **          ** ** ** **       **       **       ** ** ** **   ** ** ** **
    **            **    **    **            **       **      ** ** * ** **               **   **       **
    **            **    **      **  ***     **       **     **           **              **   **       **
    **            **    **       ** ***     **       **    **             **    ** ** ** **   **       **
                                                                                                          
       *** *** **     ** ** ** **    *** ** **         ** *** ***    ** ** ****
     **              **         **     **      **      **            **       **
    **               **         **     **      **      **            **       **
    **               **         **     **      **      ** ** **      **** ** ** 
    **               **         **     **      **      ** ** **      ** **      
    **               **         **     **      **      **            **    **   
     **              **         **     **      **      **            **      ** 
       *** *** **     ** ** ** **    *** ** **         ** *** ***    **       **
*/
 
 
#include<bits/stdc++.h>
#include "src/ShapeFactory.h"
using namespace std;
typedef long long int ll;


int main(){
    ShapeFactory* sf = new ShapeFactory(); 
    string typeOfShape = "circle";
    Shape* circle1 = sf -> getShape(typeOfShape);
    circle1 -> takeInputs();
    cout<<"Area : "<<circle1 -> getArea()<<"\n";
    cout<<"Perimeter : "<<circle1 -> getPerimeter()<<"\n";

    typeOfShape = "square";
    Shape* square = sf -> getShape(typeOfShape);
    square -> takeInputs();
    cout<<"Area : "<<square -> getArea()<<"\n";
    cout<<"Perimeter : "<<square -> getPerimeter()<<"\n";

    typeOfShape = "rectangle";
    Shape* rectangle = sf -> getShape(typeOfShape);
    rectangle -> takeInputs();
    cout<<"Area : "<<rectangle -> getArea()<<"\n";
    cout<<"Perimeter : "<<rectangle -> getPerimeter()<<"\n";

}