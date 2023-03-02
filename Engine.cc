#include <utility>

#include "Engine.hh"


Engine::Engine(vector<Object *> objects, vector<Light *> lights, Camera camera) {
    _objects = std::move(objects);
    _lights = std::move(lights);
    _camera = camera;
}

int main() {
    return 0;
}