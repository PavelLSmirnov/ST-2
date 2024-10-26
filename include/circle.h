// Copyright 2022 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>
#include <vector>

class Circle {
 private:
    double radius;
    double ference;
    double area;
 public:
    Circle(double _radius);
    void setRadius(double _radius);
    void setFerence(double _ference);
    void setArea(double _area);
    double getRadius();
    double getFerence();
    double getArea();
};

#endif  // INCLUDE_CIRCLE_H_
