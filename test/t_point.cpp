#include <gtest/gtest.h>
#include "Point.hpp"

TEST(t_point, init) {
    auto point = Point(0.0, 0.0);
}

TEST(t_point, add_operator) {
    auto pointA = Point(1.0, 2.0);
    auto pointB = Point(3.0, 4.0);
    auto pointC = pointA + pointB;

    EXPECT_EQ(pointC.x(), 4.0);
    EXPECT_EQ(pointC.y(), 6.0);
}


int main(int argc, char **argv){

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}