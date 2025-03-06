#pragma once

#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
    virtual int getArea() = 0;
    virtual int getPerimeter() = 0;
    virtual void takeInputs() = 0;
}; 