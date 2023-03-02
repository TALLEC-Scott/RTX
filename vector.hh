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