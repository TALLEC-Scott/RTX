#include "uniform_texture.hh"


void UniformTexture::getParametersAtPosition(const Point3& position, Color& kd, Color& ks, float& shininess) const
{
    kd = _kd;
    ks = _ks;
    shininess = _shininess;
}

UniformTexture::UniformTexture(Color& kd, Color& ks, float shininess) : 
_kd(ks), _ks(ks) , _shininess(shininess) {}