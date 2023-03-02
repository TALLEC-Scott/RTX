#pragma once
#include "light.hh"
#include "Point_Light.hh"
#include "camera.hh"
#include "sphere.hh"
#include <vector>

class Engine
{
public:
    Engine(vector<Object*> objects, vector<Light*> lights, Camera camera);
    Engine();
    ~Engine();
    void render();

    private:
    vector<Object*> _objects;
    vector<Light*> _lights;
    Camera _camera;
};