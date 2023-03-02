#include <utility>

#include "Engine.hh"
#include "Point_Light.hh"

Engine::Engine(const Scene& scene) : _scene(scene) {}

int main() {
    Scene scene = Scene();
    Point3 position = Point3(0, 0, 0);
    Point3 sphere_center = Point3(10, 10, 10);
    Point_Light pointLight = Point_Light(position);
    scene.addLight(&pointLight);
    Color Color1 = Color(25, 25, 25);
    Color Color2 = Color(10, 10, 10);
    UniformTexture texture = UniformTexture(Color1, Color2,10);
    Sphere sphere = Sphere(sphere_center, 3.10, texture);
    Camera camera = Camera(position, sphere_center, Vector3(1,1,1), );
    Engine engine = Engine(scene);
    return 0;
}