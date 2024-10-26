// Copyright 2024 Smirnov Pavel
#include <cstdint>
#include <cmath>
#include <vector>
#include "circle.h"

Circle::Circle(double _radius) {
    this->area = M_PI*_radius*_radius;
    this->ference = 2*M_PI*_radius;
    this->radius = _radius;
}

void Circle::setRadius(double _radius) {
    this->area = M_PI*_radius*_radius;
    this->ference = 2*M_PI*_radius;
    this->radius = _radius;
}

void Circle::setArea(double _area) {
    double new_radius = sqrt(_area / M_PI);
    this->area = _area;
    this->radius = new_radius;
    this->ference = 2 * M_PI * new_radius;
}

void Circle::setFerence(double _ference) {
    double new_radius = _ference / 2 * M_PI;
    this->area = M_PI * new_radius * new_radius;
    this->radius = new_radius;
    this->ference = _ference;
}

double Circle::getRadius() {
    return this->radius;
}
double Circle::getFerence() {
    return this->ference;
}

double Circle::getArea() {
    return this->area;
}


