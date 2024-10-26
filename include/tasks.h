// Copyright 2024 Smirnov Pavel
#ifndef ST_2_INCLUDE_TASKS_H_
#define ST_2_INCLUDE_TASKS_H_

#include <vector>
#include "circle.h"

namespace Tasks {
double calculateDeltaRadius(Circle circle, double length);
std::vector<double> calculatePoolPrice(Circle pool, double path_price, double fance_price, double path_width);
};

#endif  // ST_2_INCLUDE_TASKS_H_
