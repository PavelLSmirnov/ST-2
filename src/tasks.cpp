// Copyright 2024 Smirnov Pavel
#include <cmath>
#include <vector>

#include "circle.h"
#include "tasks.h"

double calculateDeltaRadius(Circle circle, double length) {
    double new_ference = circle.getFerence() + length;
    double new_radius = new_ference / 2 * M_PI;
    double result = new_radius - circle.getRadius();
    return result;
}

std::vector<double> calculatePoolPrice(
    Circle pool,
    double path_price,
    double fence_price,
    double path_width
) {
    double fence_radius = pool.getRadius() + path_width;
    Circle fence(fence_radius);
    double result_fence_price = fence.getFerence() * fence_price;
    double result_path_price = (fence.getArea() - pool.getArea()) * path_price;
    std::vector<double> result = { result_fence_price, result_path_price };
    return result;
}
