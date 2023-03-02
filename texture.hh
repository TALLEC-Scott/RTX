#pragma once
#include "image.hh"
#include "color.hh"
#include "point.hh"
#include "vector.hh"



class TextureMaterial 
{
    public:
        virtual ~TextureMaterial() = default;
        virtual void getParametersAtPosition(const Point3& position, Color& kd, Color& ks, float& shininess) const = 0;
};