#pragma once
#include "light.hh"
#include "Point_Light.hh"
#include "camera.hh"
#include "sphere.hh"
#include "Scene.hh"
#include <vector>

class Engine {
public:
    Engine(const Scene& scene);

    Engine();

    ~Engine();

    void render();

private:
    Scene _scene;
};