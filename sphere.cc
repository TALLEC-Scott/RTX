#pragma once
#include "image.hh"
#include "color.hh"
#include "point.hh"
#include "vector.hh"
#include "object.cc"

class Sphere : public Object
{
    public:
        Sphere(Point3& center, double& radius, TextureMaterial& textureMaterial);
        Point3 intersect(const Point3 point_ray, const Vector3& vector_ray, const float& t) const override;
        Vector3 getNormal(const Point3& point) const override;
        void getTexture(const Point3& point, Color& kd, Color& ks, float& shininess) const override;
        const TextureMaterial& getMaterial() const override;
    private:
        Point3 _center;
        double _radius;
};

Sphere::Sphere(Point3& center, double& radius, TextureMaterial& textureMaterial) : 
_center(center), _radius(radius) {}