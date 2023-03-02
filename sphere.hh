#pragma once
#include "object.hh"
#include "point.hh"
#include "texture.hh"
#include "uniform_texture.hh"

class Sphere : public Object
{
    public:
        Sphere(Point3& center, double radius, TextureMaterial& textureMaterial);

    Point3 intersect(const Ray &ray) const override;
        Vector3 getNormal(const Point3& point) const override;
        void getTexture(const Point3& point, Color& kd, Color& ks, float& shininess) const override;
        const TextureMaterial& getMaterial() const override;
    private:
        Point3 _center;
        double _radius;
        TextureMaterial& _textureMaterial;

};
