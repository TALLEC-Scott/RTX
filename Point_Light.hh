//
// Created by scott on 02/03/23.
//
#pragma once
#include "point.hh"
#include "light.hh"


class Point_Light : public Light{
    public:
    Point_Light();
    explicit Point_Light(Point3 position);

private:
    Point3 _position;

};

