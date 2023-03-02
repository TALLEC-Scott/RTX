#include "sphere.hh"

#include "point.hh"


Sphere::Sphere(Point3& center, double& radius, TextureMaterial& textureMaterial) :
_center(center), _radius(radius), _textureMaterial(textureMaterial) {}

Point3 Sphere::intersect(const Ray &ray) const {
    // here we need to solve the quadratic equation between the sphere and the line
    auto a = 1;
    auto b = Ray::getDirection()*2 *(Ray::getOrigin() - _center);
    auto c = (Ray::getOrigin() - _center).norm2() - _radius*_radius;
    auto delta = b*b - 4*a*c;
    if (delta < 0) {
        return Point3(0, 0, 0);
    }
    else {
        auto t1 = (-b - sqrt(delta)) / (2*a);
        auto t2 = (-b + sqrt(delta)) / (2*a);
        if ((t1 < 0 && t2 < 0) || t1< 0 || t2< 0) {
            return Point3(0, 0, 0);
        }
        else {
            return ray*t1;
        }
    }
}

Vector3  Sphere::getNormal(const Point3 &point) const {
    return Vector3(point.getX() - _center.getX(), point.getY() - _center.getY(), point.getZ() - _center.getZ()) * (1/_radius);
}

void Sphere::getTexture(const Point3 &point, Color &kd, Color &ks, float &shininess) const {
    return _textureMaterial.getParametersAtPosition(point, kd, ks, shininess);
}

const TextureMaterial &Sphere::getMaterial() const {
    return _textureMaterial;
}


