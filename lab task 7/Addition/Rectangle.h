#pragma once

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    Rectangle(float l, float w); // Overloaded constructor
   
    // Accessor methods
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    // Member function to calculate area
    float calculateArea() const;

};
