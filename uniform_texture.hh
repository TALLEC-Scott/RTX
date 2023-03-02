#pragma once
#include "texture.hh"

class UniformTexture : public TextureMaterial
{
public:
    UniformTexture() = default;
    UniformTexture(Color& kd, Color& ks, float shininess);
    void getParametersAtPosition(const Point3& position, Color& kd, Color& ks, float& shininess) const override;

private:
    Color _kd;
    Color _ks;
    float _shininess{};
};