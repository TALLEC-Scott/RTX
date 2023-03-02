#include "vector.hh"

Vector3 Vector3::operator*(const double &l) const
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

Vector3::Vector3(double x, double y, double z) {
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

Vector3 Vector3::normalized() const {
    double norm = norm2();
    return Vector3(_x/norm, _y/norm, _z/norm);
}

double Vector3::norm2() const {
    return sqrt(_x*_x + _y*_y + _z*_z);
}

double Vector3::getX() const {
    return _x;
}

double Vector3::getY() const {
    return _y;
}

double Vector3::getZ() const {
    return _z;
}

double Vector3::operator[](int i) const {
    if (i == 0) {
        return _x;
    } else if (i == 1) {
        return _y;
    } else if (i == 2) {
        return _z;
    } else {
        return 0;
    }
}
