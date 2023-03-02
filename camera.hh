#pragma once
#include "point.hh"
#include "vector.hh"

class Camera
{
public:
private:
    Point3 _center;
    Point3 _lookAt;
    Vector3 _up;
    float alpha;
    float beta;
    float zNear;
};