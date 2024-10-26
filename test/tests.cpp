// Copyright 2024 Smirnov Pavel
#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>
#include <vector>

#include "circle.h"
#include "tasks.h"

TEST(CirlceTest, CheckArea1) {
    double radius = 3;
    Circle circle(radius);
    double expected_area = radius * radius * M_PI;
    EXPECT_EQ(circle.getArea(), expected_area);
}

TEST(CirlceTest, CheckArea2) {
    double radius = 4;
    Circle circle(radius);
    double expected_area = radius * radius * M_PI;
    EXPECT_EQ(circle.getArea(), expected_area);
}

TEST(CircleTest, CheckFerence1) {
    double radius = 3;
    Circle circle(radius);

    double expected_ference = 2 * radius * M_PI;

    EXPECT_EQ(circle.getFerence(), expected_ference);
}

TEST(CircleTest, CheckFerence2) {
    double radius = 5;
    Circle circle(radius);

    double expected_ference = 2 * radius * M_PI;

    EXPECT_EQ(circle.getFerence(), expected_ference);
}


TEST(TaskTest, CheckEarth1) {
    double earth_radius = 6378.1 * pow(10, 3);
    Circle earth(earth_radius);
    double delta = calculateDeltaRadius(earth, 1.0);

    double expected_delta = 56571225.401384361;
    EXPECT_EQ(delta, expected_delta);
}

TEST(TaskTest, CheckEarth2) {
    double earth_radius = 6378.1 * pow(10, 3);
    Circle earth(earth_radius);
    double delta = calculateDeltaRadius(earth, 2.0);

    double expected_delta = 56571226.972180687;
    EXPECT_EQ(delta, expected_delta);
}

TEST(TaskTest, CheckPool1) {
    double pool_radius = 3;
    Circle pool(pool_radius);
    std::vector<double> result = calculatePoolPrice(pool, 1000, 2000, 1);

    std::vector<double> expected_result = {
        50265.482457436687,
        21991.148575128551
    };
    EXPECT_EQ(result, expected_result);
}

TEST(TaskTest, CheckPool2) {
    double pool_radius = 3;
    Circle pool(pool_radius);
    std::vector<double> result = calculatePoolPrice(pool, 1000, 2000, 1);

    std::vector<double> expected_result = {
        10,
        20
    };
    EXPECT_TRUE(result > expected_result);
}
