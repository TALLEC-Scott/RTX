#pragma once
#include "image.hh"
#include "color.hh"
#include "point.hh"
#include "vector.hh"

class TextureMaterial 
{
    public:
        virtual ~TextureMaterial() {}
        virtual void getParametersAtPosition(const Point3& position, Color& kd, Color& ks, float& shininess) const = 0;
};

class UniformTexture : public TextureMaterial
{
    public:
        UniformTexture() {}
        UniformTexture(Color& kd, Color& ks, float shininess);
        void getParametersAtPosition(const Point3& position, Color& kd, Color& ks, float& shininess) const override;

    private:
        Color _kd;
        Color _ks;
        float _shininess;
};

void UniformTexture::getParametersAtPosition(const Point3& position, Color& kd, Color& ks, float& shininess) const
{
    kd = _kd;
    ks = _ks;
    shininess = _shininess;
}

UniformTexture::UniformTexture(Color& kd, Color& ks, float shininess) : 
_kd(ks), _ks(ks) , _shininess(shininess) {}