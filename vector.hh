#pragma once
#include <iostream>
#include <cmath>

class Vector3
{
    public:
        Vector3(double x, double y, double z);
        Vector3();
        Vector3 operator*(const double& l) const;
        Vector3 operator-(const Vector3& v) const;
        Vector3 operator+(const Vector3& v) const;
        Vector3 operator^(const Vector3& v) const;
        double operator[](int i) const;
        float operator*(const Vector3& v) const;
        std::ostream& operator<<(std::ostream &out);

    Vector3 normalized() const;

    double norm2() const;

    double getX() const;

    double getY() const;

    double getZ() const;

private:
        double _x;
        double _y;
        double _z;

};