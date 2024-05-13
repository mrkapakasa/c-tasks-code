#pragma once

namespace shapes {
    class Triangle {
    private:
        float sideA;
        float sideB;
        float sideC;

    public:
        Triangle(double sideA, double sideB, double sideC);
        ~Triangle(); // Destructor
        float getSideA() const;
        float getSideB() const;
        float getSideC() const;
    };
}