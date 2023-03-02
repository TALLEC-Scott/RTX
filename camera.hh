#pragma once
#include "point.hh"
#include "vector.hh"
#include "ray.hh"
#include <vector>

class Camera
{
public:

    inline Camera(const Point3 &center, const Point3 &lookAt, const Vector3 &up, float alpha, float beta, float zNear)
            : _center(center), _lookAt(lookAt), _up(up), _alpha(alpha), _beta(beta), _zmin(zNear) {}

            vector<Ray> getRays(int width, int height) const;

private:
    Point3 _center;
    Point3 _lookAt;
    Vector3 _up;
    float _alpha;
    float _beta;
    float _zmin;
};