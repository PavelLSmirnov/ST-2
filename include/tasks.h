// Copyright 2024 Smirnov Pavel
#ifndef INCLUDE_TASKS_H_
#define INCLUDE_TASKS_H_

#include <vector>
#include "circle.h"


double calculateDeltaRadius(Circle circle, double length);
std::vector<double> calculatePoolPrice(
    Circle pool, double path_price, double fance_price, double path_width);


#endif  // INCLUDE_TASKS_H_
