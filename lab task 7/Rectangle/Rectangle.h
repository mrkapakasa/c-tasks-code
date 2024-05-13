#pragma once
 
class Rectangle {
private:
    float length;
    float width;
public:
    // Default constructor
    Rectangle(); //Default constructor

    

    // Accessor methods
    void setLength(float);
    void setWidth(float);
    float getLength() const;
    float getWidth() const ;

    // Member function to calculate area
    float calculateArea() const ;
    ~Rectangle(){//Default destructor
    }
};
