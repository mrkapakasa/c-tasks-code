// Triangle.cpp
#include "Triangle.h"

namespace shapes {
    Triangle::Triangle(float sideA, float sideB, float sideC) : sideA(sideA), sideB(sideB), sideC(sideC) {}

    Triangle::~Triangle() {} // Destructor

    float Triangle::getSideA() const {
        return sideA;
    }

    float Triangle::getSideB() const {
        return sideB;
    }

    float Triangle::getSideC() const {
        return sideC;
    }
}
