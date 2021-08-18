#include <iostream>

#include "Point.hpp"

int main(int argc, char* argv[]) {

    auto pointA = Point(0.0, 1.0);
    auto pointB = Point(5.0, 2.0);

    auto pointC = pointA + pointB;
    auto pointD = pointA - pointB;

    return 0;
}
