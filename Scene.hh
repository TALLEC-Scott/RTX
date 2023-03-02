#pragma once
#include "light.hh"
#include "object.hh"
#include "Point_Light.hh"
#include "camera.hh"
#include <unordered_set>
using namespace std;

class Scene
{
public:
    Scene(unordered_set<Object*> objects, unordered_set<Light*> lights, Camera camera);
    Scene();
    ~Scene();
    void render();
    void addObject(Object* object);
    void addLight(Light* light);
    void removeLight(Light* light);
    void removeObject(Object* object);
    void setCamera(Camera camera);
    Camera getCamera();
private:
    unordered_set<Object*> _objects;
    unordered_set<Light*> _lights;
    Camera _camera;
};