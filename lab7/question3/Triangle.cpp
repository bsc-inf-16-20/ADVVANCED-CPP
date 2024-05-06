#include "Triangle.h"

namespace shapes{
    Triangle::Triangle() : base(0.0), height(0.0){ }
    Triangle::Triangle(float b, float h) : base(b), height(h){}
    Triangle::~Triangle(){}

    void Triangle::setBase(float b){
        base = b;
    }

    float Triangle::getBase()const {
        return base;
    }

    void Triangle::setHeight(float h){
        height = h;
    }

    float Triangle::getHeight() const {
        return height;
    }
}