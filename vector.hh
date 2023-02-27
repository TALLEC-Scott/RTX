#pragma once
#include <iostream>

class Vector3
{
    public:
        Vector3(float x, float y, float z);
        Vector3 operator*(const float& l) const;
        Vector3 operator-(const Vector3& v) const;
        Vector3 operator+(const Vector3& v) const;
        Vector3 operator^(const Vector3& v) const;
        float operator*(const Vector3& v) const;
        std::ostream& Vector3::operator<<(std::ostream &out);


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
    out << "{ " << _x <<  ", " <<  _y << ", " << _z << " }";

}