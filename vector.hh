#pragma once
#include <iostream>
#include <cmath>

class Vector3
{
    public:
        Vector3(float x, float y, float z);
        Vector3();
        Vector3 operator*(const float& l) const;
        Vector3 operator-(const Vector3& v) const;
        Vector3 operator+(const Vector3& v) const;
        Vector3 operator^(const Vector3& v) const;
        float operator*(const Vector3& v) const;
        std::ostream& operator<<(std::ostream &out);


    double norm2() const;

    float getX() const;

    float getY() const;

    float getZ() const;

private:
        float _x;
        float _y;
        float _z;

};
Vector3 Vector3::operator*(const float &l) const
{

    return Vector3{_x * l, _y *l, _z*l};
}

Vector3 Vector3::operator-(const Vector3& v) const
{

    return Vector3{_x - v._x, _y - v._y, _z - v._z };
}

Vector3 Vector3::operator+(const Vector3& v) const
{

    return Vector3{_x + v._x, _y + v._y, _z + v._z };
}

Vector3 Vector3::operator^(const Vector3& v) const
{
    float new_x = _y * v._z - _z*v._y;
    float new_y = _z*v._x - _x*v._z;
    float new_z = _x*v._y - _y * v._x;
    return Vector3{new_x, new_y, new_z};
}

float Vector3::operator*(const Vector3& v) const
{
    return _x * v._x + _y*v._y + _z*v._z;
}

std::ostream& Vector3::operator<<(std::ostream &out)
{
    return out << "{ " << _x <<  ", " <<  _y << ", " << _z << " }";
}

Vector3::Vector3(float x, float y, float z) {
    _x = x;
    _y = y;
    _z = z;
}

/* default constructor */

Vector3::Vector3() {
    _x = 0;
    _y = 0;
    _z = 0;
}

double Vector3::norm2() const {
    return sqrt(_x*_x + _y*_y + _z*_z);
}

float Vector3::getX() const {
    return _x;
}

float Vector3::getY() const {
    return _y;
}

float Vector3::getZ() const {
    return _z;
}
