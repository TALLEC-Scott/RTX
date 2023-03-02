#include "point.hh"

Point3::Point3() : _x(0), _y(0), _z(0) {}


Point3::Point3(float x, float y, float z): _x(x), _y(y), _z(z)
{}

Vector3 Point3::operator+(const Point3 &other) const {
    return Vector3(_x + other._x, _y + other._y, _z + other._z);
}

Vector3 Point3::operator-(const Point3 &other) const {
    return Vector3(_x - other._x, _y - other._y, _z - other._z);
}

float Point3::getX() const {
    return _x;
}

float Point3::getY() const {
    return _y;
}

float Point3::getZ() const {
    return _z;
}