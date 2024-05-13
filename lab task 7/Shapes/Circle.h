#pragma once

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle(float radius);
        ~Circle(); // Destructor
        float getRadius() const;
    };
}