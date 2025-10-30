#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h"
#include "../include/Circle.h"
#include <cmath>

TEST_CASE("Default constructor initializes radius to 0") {
    Circle c;
    CHECK(c.getRadius() == doctest::Approx(1.0));
}

TEST_CASE("Parameterized constructor sets radius correctly") {
    Circle c(5.0);
    CHECK(c.getRadius() == doctest::Approx(5.0));
}

TEST_CASE("setRadius updates the radius value") {
    Circle c;
    c.setRadius(10.5);
    CHECK(c.getRadius() == doctest::Approx(10.5));
}

TEST_CASE("area() computes π * r^2 correctly") {
    Circle c(3.0);
    double expected = M_PI * 3.0 * 3.0;
    CHECK(c.area() == doctest::Approx(expected));
}

TEST_CASE("circumference() computes 2 * π * r correctly") {
    Circle c(4.0);
    double expected = 2 * M_PI * 4.0;
    CHECK(c.circumference() == doctest::Approx(expected));
}

TEST_CASE("Negative radius handling (if supported)") {
    Circle c;
    c.setRadius(-5.0);
    // Depending on intended behavior; modify if class clamps to 0
    CHECK(c.getRadius() == doctest::Approx(-5.0));
}
