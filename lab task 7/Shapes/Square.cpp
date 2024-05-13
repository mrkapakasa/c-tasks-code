// Square.cpp
#include "Square.h"

namespace shapes {
    Square::Square(float side) : side(side) {}

    Square::~Square() {} // Destructor

    float Square::getSide() const {
        return side;
    }
}
