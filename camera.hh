#pragma once
#include "point.hh"
#include "vector.hh"

class Camera
{
public:

    inline Camera(const Point3 &center, const Point3 &lookAt, const Vector3 &up, float alpha, float beta, float zNear)
            : _center(center), _lookAt(lookAt), _up(up), alpha(alpha), beta(beta), zNear(zNear) {}
private:
    Point3 _center;
    Point3 _lookAt;
    Vector3 _up;
    float alpha{};
    float beta{};
    float zNear{};
};