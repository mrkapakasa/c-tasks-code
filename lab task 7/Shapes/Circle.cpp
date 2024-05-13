// Circle.cpp
#include "Circle.h"

namespace shapes {
    Circle::Circle(float radius) : radius(radius) {}

    Circle::~Circle() {} // Destructor

    float Circle::getRadius() const {
        return radius;
    }
}
