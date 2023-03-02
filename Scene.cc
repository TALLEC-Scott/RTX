#include "Scene.hh"

Scene::Scene(unordered_set<Object*> objects, unordered_set<Light*> lights, Camera camera) {
    _objects = objects;
    _lights = lights;
    _camera = camera;
}

Scene::Scene() {
    _objects = unordered_set<Object*>();
    _lights = unordered_set<Light*>();
    _camera = Camera();
}

void Scene::addObject(Object *object) {
    _objects.insert(object);
}

void Scene::removeLight(Light *light) {
    _lights.erase(light);
}

void Scene::removeObject(Object *object) {
    _objects.erase(object);
}

void Scene::setCamera(Camera camera) {
    _camera = camera;
}

Camera Scene::getCamera() {
    return _camera;
}

void Scene::addLight(Light *light) {
    _lights.insert(light);

}
