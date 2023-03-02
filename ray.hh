#pragma once

#include "vector.hh"
#include "point.hh"


class Ray
{
    public:
        Ray(Point3& origin, Vector3& direction);
        static Point3 getOrigin() ;
        static Vector3 getDirection() ;
        Point3 operator*(const float& t) const;
    private:
        Point3 _origin;
        Vector3 _direction;
};

