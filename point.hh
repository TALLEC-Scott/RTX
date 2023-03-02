#pragma once
#include "color.hh"
#include "vector.hh"

class Point3
{
    public:

    Point3(float x, float y, float z);

    Point3();
    Vector3 operator+(const Point3& other) const;
    Vector3 operator-(const Point3& other) const;


    float getX() const;

    float getY() const;

    float getZ() const;

private:
    float _x;
    float _y;
    float _z;
};
