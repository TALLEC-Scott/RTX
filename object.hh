#pragma once
#include "color.hh"
#include "point.hh"
#include "vector.hh"
#include "texture.hh"
#include "ray.hh"

class Object
{
    public:
        virtual Point3 intersect(const Ray &ray, const float& t) const = 0;
        virtual Vector3& getNormal(const Point3& point) const = 0;
        virtual void getTexture(const Point3& point, Color& kd, Color& ks, float& shininess) const = 0;
        virtual const TextureMaterial& getMaterial() const = 0;
};