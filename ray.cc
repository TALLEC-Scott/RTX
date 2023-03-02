//
// Created by scott on 02/03/23.
//

#include "ray.hh"

Ray::Ray(Point3 &origin, Vector3 &direction) {
    _origin = origin;
    _direction = direction;
}

Point3 Ray::getOrigin() {
    return Point3(0, 0, 0);
}

Vector3 Ray::getDirection() {
    return Vector3(0, 0, 0);
}

Point3 Ray::operator*(const float &t) const {
    return Point3(_origin.getX() + _direction.getX() * t,
           _origin.getY() + _direction.getY() * t,
           _origin.getZ() + _direction.getZ() * t);
}
