#pragma once

namespace shapes {
    class Square {
    private:
        double side;

    public:
        Square(double side);
        ~Square(); // Destructor
        double getSide() const;
    };
}