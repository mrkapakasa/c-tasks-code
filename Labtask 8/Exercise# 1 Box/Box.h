//
// Created by HP on 5/6/2024.
//

#ifndef BOX_H
#define BOX_H


#pragma once
#include <iostream>
using namespace std;

class Box {
public:
    Box();
    Box(const double newLength, const double newBreadth, const double newHeight);
    ~Box();
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

    // Overload + operator to add two Box objects.
    Box operator+(const Box& b);

private:
    double length; // Length of a box
    double breadth; // Breadth of a box
    double height; // Height of a box
};





#endif //BOX_H
